#define PIN_LED 7
bool toggle = 0;
void setup(){
  pinMode(PIN_LED,OUTPUT);
}

void loop(){
  digitalWrite(PIN_LED,toggle);
  delay(1000);
  for(int i=0; i<=10; i++)
  {
    digitalWrite(PIN_LED, !toggle);
    toggle=!toggle;
    delay(100);
  }
  while(1){
    ;
  }
}
