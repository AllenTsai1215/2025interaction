//week10_2_arduino_pin2_switch_tone_8_523_784_delay100
void setup() {
  pinmode(2,INPUT_PULLUP);//拉高,變5伏特,真的按下去變0伏特(GND接地)
  pinmode(8,OUTPUT);
}//pin2 變成按鈕,可以HIGH(沒按)可以LOW(按)

void loop() {
  if(digitalRead(2)==LOW){//如果pin2有按下去
    tone(8,523,100);//DO
    delate(100);
    tone(8,784,100);//SO
    delate(100);
  }
}
