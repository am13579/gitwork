void setup() {
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  analogWrite(11,100);  //中速
  delay(1000);
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);  //前進
  delay(1000);
  analogWrite(11,200);  //高速
  delay(1000);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);  //ブレーキ
  delay(1000);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);  //後退
  delay(1000);
  analogWrite(11,50);  //低速
  delay(1000);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);  //ブレーキ
  delay(1000);
}
