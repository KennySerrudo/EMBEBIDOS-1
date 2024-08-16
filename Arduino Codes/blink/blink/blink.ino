#define LED 13

#define TIME 1500
void setup() {
  // put your setup code here, to run once:
pinMode (LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED, !digitalWrite(LED));
delay(time);
}