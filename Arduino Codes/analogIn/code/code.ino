#define POT   A0
#define LED    9
#define BR  9600

void setup() {
  Serial.begin(BR);
  pinMode(POT,INPUT);
  pinMode(LED,OUTPUT);
}

void loop() {
  int p=analogRead(POT);
  int mapeo=map(p,0,1023,0,255);
  Serial.print("POT: ");
  Serial.print(p);
  Serial.print("  LED: ");
  Serial.println(mapeo);
  analogWrite(LED, mapeo);

}
