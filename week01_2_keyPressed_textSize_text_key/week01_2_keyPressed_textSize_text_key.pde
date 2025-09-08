//week01_2_keyPressed_textSize_text_key
void setup(){
  size(500,500);
}
void draw(){
  if(keyPressed){//記得先切輸入法
    background(#FF0000);//紅色背景
    textSize(80);//字型變大
    text(""+key,100,100);
  }
}
