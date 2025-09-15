//week02_3_mousePressed_serial
import processing.serial.*;//使用USB的serial
Serial myPort;//宣告USB的Serial變數myPort
void mousePressed(){
  myPort.write(' ');//mouse 按下時,就送' '出去
}
void setup(){
  size(400,400);
  myPort = new Serial(this,"COM4",9600);//準備好USB
}//剛剛在Arduino裡設定COM多少就多少
void draw(){
  if(mousePressed)background(#FF0000);
  else background(#00FF00);
}
