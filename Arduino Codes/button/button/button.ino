#define LED     13
#define BUTTON   7

void setup() {
  // put your setup code here, to run once:
pinMode (LED, OUTPUT);
pinMode (BUTTON,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
byte b = digitalRead(BUTTON);
if (b==0){
  digitalWrite(LED, 1);
}
else {
  digitalWrite(LED, 0);
}
}
