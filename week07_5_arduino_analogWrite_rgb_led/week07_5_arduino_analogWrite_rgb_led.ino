//week07_5_arduino_analogWrite_rgb_led

void setup() {
  pinMode(3,OUTPUT);//接最左邊的紅色
  pinMode(5,OUTPUT);//藍色
  pinMode(6,OUTPUT);//綠色
  //要輸出這些特別的腳,分別是第3、第5、第6、第9、第10、第11 共6個腳,都可控制他亮暗的程度
}
int a=0;
void loop() {
  analogWrite(6,0);//藍色關掉
  analogWrite(3,255);//最亮的紅色
  delay(500);
  analogWrite(3,0);//紅色關掉
  analogWrite(5,255);//最亮的綠色
  delay(500);
  analogWrite(5,0);//綠色關掉
  analogWrite(6,255);//最亮的藍色
  delay(500);
}