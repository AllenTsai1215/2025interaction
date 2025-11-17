//week11_arduino_serial_joystick_x_y_to_processing_better
//修改自 week10_7_arduino_serial_joystick_x_y_to_processing

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(8, OUTPUT);
}

int count = 0, totalX = 0, totalY = 0;//要累積平均的值
int x0 = 512, y0 = 512;

void loop() {
  delay(30);//要慢一點，不然Processing會接不了

  int x = analogRead(A2);//搖桿的 X 軸值接A2
  int y = analogRead(A3);//搖桿的 Y 軸值接A3
  if (count < 20) {
    totalX += x;//累積 X
    totalY += y;//累積 Y
    count++;//次數 +1
    x0 = totalX / count;//平均 X
    y0 = totalY / count;//平均 Y
  }

    if (abs(x - x0) < 25) x = 128;//直接棒中間值128
    else x = (x-x0)/4.4+128;
    if (abs(y - y0) < 25) y = 128;
    else y = (y-y0)/4.4+128;
    Serial.write(x);//傳送 X
    Serial.write(y);//傳送 Y

  if (x > 900) tone(8, 784, 100);
  if (x < 100) tone(8, 523, 100);
  if (y > 900) tone(8, 659, 100);
  if (y < 100) tone(8, 500, 100);//單獨響一下
}