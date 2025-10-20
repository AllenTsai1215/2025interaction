//week07_1_arduino_blink

void setup() {
  pinMode(13,OUTPUT);//把第13隻腳，送出資料到OUTPUT
  
}

void loop() {
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(500);
}
