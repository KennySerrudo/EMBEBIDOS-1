#define  B1         2
#define  B2         3
#define  BAUDRATE   9600
#include <EEPROM.h>
unsigned int volum;
volatile unsigned long lasttime=0;
volatile unsigned int debounceDelay = 80;


void setup() {
pinMode(B1,INPUT);
pinMode(B2,INPUT);
attachInterrupt(digitalPinToInterrupt(B1),Subir, FALLING);
attachInterrupt(digitalPinToInterrupt(B2),Bajada, FALLING);
Serial.begin(BAUDRATE);
Serial.print("Volumen es: ");
Serial.println(EEPROM.read(0));
}

void loop() {
  delay(5000);
}
void Subir() {
  if (millis()-lasttime > debounceDelay){
   volum++;
   lasttime = millis(); 
  }
  if (volum > 20){
    volum = 20;
  }
  EEPROM.write(0,volum);
  Serial.print("Volumen es: ");
  Serial.println(EEPROM.read(0));
}
void Bajada() {
  if (millis()-lasttime > debounceDelay){
   volum--;
   lasttime = millis(); 
  }
  if (volum < 0){
    volum = 0;
  }
  EEPROM.write(0,volum);
  Serial.print("Volumen es: ");
  Serial.println(EEPROM.read(0));
}
