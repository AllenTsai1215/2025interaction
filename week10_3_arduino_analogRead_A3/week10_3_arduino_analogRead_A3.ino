//week10_3_arduino_analogRead_A3
void setup() {
  pinmode(2,INPUT_PULLUP);
  pinmode(3,INPUT);
  pinmode(8,OUTPUT);
}
void loop() {
  int now = analogread(A3);
  if (now > 800){
    tone(8,523,100);//DO
    delate(100);
    tone(8,784,100);//SO
    delate(200);
  }else if(now<200){
    tone(8,784,100);//SO
    delate(100);
    tone(8,523,100);//DO
    delate(200);
  }
}
