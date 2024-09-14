#define BUTTON  3
#define BR   9600

unsigned long last_debounce_time = 0;
unsigned long debounce_delay = 50; // Tiempo de antirrebote

int cont = 0;
bool button_state;
bool last_state = HIGH; // Asumimos que el botón está en estado alto inicialmente

void setup() {
  Serial.begin(BR);
  pinMode(BUTTON, INPUT);
}

void loop() {
  button_state = digitalRead(BUTTON);

  if (button_state != last_state) {
    last_debounce_time = millis();
  }

  if ((millis() - last_debounce_time) > debounce_delay) {
    if (button_state == LOW && last_state == HIGH) {
      cont++;
      Serial.print("Contador actualizado: ");
      Serial.println(cont);
    }
  }
  last_state = button_state;
}
