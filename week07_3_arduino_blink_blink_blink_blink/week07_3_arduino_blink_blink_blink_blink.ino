//week07_3_arduino_blink_blink_blink_blink

void setup() {
  pinMode(13,OUTPUT);//把第13隻腳，送出資料到OUTOPUT
  pinMode(12,OUTPUT);//把第12隻腳，送出資料到OUTOPUT
  pinMode(11,OUTPUT);//把第11隻腳，送出資料到OUTOPUT
  pinMode(10,OUTPUT);//把第10隻腳，送出資料到OUTOPUT
}

void loop() {
  for(int i=10;i<=13;i++){
    digitalWrite(13,LOW);
    digitalWrite(i-1,LOW);
    digitalWrite(i,HIGH);
    delay(500);
  }
}
