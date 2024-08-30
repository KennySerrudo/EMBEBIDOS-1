#define LED_RED     13
#define LED_YELLOW  12
#define LED_GREEN   11

#define t1 3000
#define t2 1500
#define t3 6000

#define BUTTON 2

void setup() {
pinMode(LED_RED   ,OUTPUT);
pinMode(LED_YELLOW,OUTPUT);
pinMode(LED_GREEN ,OUTPUT);
attachInterrupt(digitalPinToInterrupt(BUTTON), PARADA, CHANGE);
}

void loop() {

    digitalWrite(LED_GREEN,0);
    digitalWrite(LED_RED,1);
    delay(t1);
    digitalWrite(LED_RED,0);
    digitalWrite(LED_YELLOW,1);
    delay(t2);
    digitalWrite(LED_GREEN,1);
    digitalWrite(LED_YELLOW,0);
    delay(t3);

}
void PARADA(){
  digitalWrite(LED_RED,1);
  digitalWrite(LED_GREEN,0);
  digitalWrite(LED_YELLOW,0);
}