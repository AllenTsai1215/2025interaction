//week07_4_arduino_analogWrite

void setup() {
  pinMode(11,OUTPUT);//第11個PIN腳(有PWM的功能,可0-255輸出),要輸出這些特別的腳,
  //分別是第3、第5、第6、第9、第10、第11 共6個腳,都可控制他亮暗的程度
}
int a=0;
void loop() {
  analogWrite(11,a);//亮的程度是a的值
  a=(a+1)%256;//會再亮一點點
  delay(10);//每0.01秒
}