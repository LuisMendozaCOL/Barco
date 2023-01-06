int nd=6;
int ni=3;
int i;
int ENABLE=13;

void setup() {
  pinMode(nd, OUTPUT);
  pinMode(ni, OUTPUT);
  pinMode(ENABLE, OUTPUT);
}

void loop() {
  digitalWrite(ENABLE, HIGH);
  digitalWrite(nd, HIGH);
  digitalWrite(ni, LOW);
  delay(3600);

  digitalWrite(nd, LOW);
  digitalWrite(ni, LOW);
  delay(1400);

  for (i=127;i>0; i--){
    analogWrite(nd,0);
    analogWrite(ni,i);
    delay(500);
  }
  digitalWrite(nd, LOW);
  digitalWrite(ni, LOW);
  delay(5000);

}
