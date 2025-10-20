//week07_2_arduino_blink_blink

void setup() {
  pinMode(13,OUTPUT);//把第13隻腳，送出資料到OUTOPUT
  pinMode(12,OUTPUT);//把第12隻腳，送出資料到OUTOPUT
}

void loop() {
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(500);
  digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(12,LOW);
  delay(500);
}
