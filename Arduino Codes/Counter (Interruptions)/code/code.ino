#define A   12
#define B   11
#define C   10
#define D    9
#define E    8
#define F    7
#define G    6

#define BLINK_TIME 500
#define BUTTON  2
uint8_t cont = 0;
void setup() {
  pinMode (A,OUTPUT);
  pinMode (B,OUTPUT);
  pinMode (C,OUTPUT);
  pinMode (D,OUTPUT);
  pinMode (E,OUTPUT);
  pinMode (F,OUTPUT);
  pinMode (G,OUTPUT);
  pinMode (LED_BUILTIN,OUTPUT);
  pinMode (BUTTON, INPUT);
  attachInterrupt(digitalPinToInterrupt(BUTTON), counter, FALLING);
  for (uint8_t i=7; i<13; i++){digitalWrite(i,1);}digitalWrite(G,0);
}

void loop() {
  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
  delay (BLINK_TIME);
}
void counter(){
  cont++;
  if (cont>9) cont=0;
  switch(cont){
    case 0:digitalWrite(A,1);digitalWrite(B,1);digitalWrite(C,1);digitalWrite(D,1);digitalWrite(E,1);digitalWrite(F,1);digitalWrite(G,0);break;
    case 1:digitalWrite(A,0);digitalWrite(B,1);digitalWrite(C,1);digitalWrite(D,0);digitalWrite(E,0);digitalWrite(F,0);digitalWrite(G,0);break;
    case 2:digitalWrite(A,1);digitalWrite(B,1);digitalWrite(C,0);digitalWrite(D,1);digitalWrite(E,1);digitalWrite(F,0);digitalWrite(G,1);break;
    case 3:digitalWrite(A,1);digitalWrite(B,1);digitalWrite(C,1);digitalWrite(D,1);digitalWrite(E,0);digitalWrite(F,0);digitalWrite(G,1);break;
    case 4:digitalWrite(A,0);digitalWrite(B,1);digitalWrite(C,1);digitalWrite(D,0);digitalWrite(E,0);digitalWrite(F,1);digitalWrite(G,1);break;
    case 5:digitalWrite(A,1);digitalWrite(B,0);digitalWrite(C,1);digitalWrite(D,1);digitalWrite(E,0);digitalWrite(F,1);digitalWrite(G,1);break;
    case 6:digitalWrite(A,1);digitalWrite(B,0);digitalWrite(C,1);digitalWrite(D,1);digitalWrite(E,1);digitalWrite(F,1);digitalWrite(G,1);break;
    case 7:digitalWrite(A,1);digitalWrite(B,1);digitalWrite(C,1);digitalWrite(D,0);digitalWrite(E,0);digitalWrite(F,0);digitalWrite(G,0);break;
    case 8:digitalWrite(A,1);digitalWrite(B,1);digitalWrite(C,1);digitalWrite(D,1);digitalWrite(E,1);digitalWrite(F,1);digitalWrite(G,1);break;
    case 9:digitalWrite(A,1);digitalWrite(B,1);digitalWrite(C,1);digitalWrite(D,1);digitalWrite(E,0);digitalWrite(F,1);digitalWrite(G,1);break;
    default:break;
  }
}
