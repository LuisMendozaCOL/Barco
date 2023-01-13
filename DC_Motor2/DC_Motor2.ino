//www.elegoo.com
//2017.12.12

/************************
Exercise the motor using
the L293D chip
************************/

int ENABLE = 11;
int DIRA = 12;
int DIRB = 13;
int speedMotor = 0 ;

int i;
 
void setup() {
  //---set pin direction
  Serial.begin(9600);
  pinMode(ENABLE,OUTPUT);
  pinMode(DIRA,OUTPUT);
  pinMode(DIRB,OUTPUT);

}

void loop() {
  Serial.println("fast Slow example");
  //---fast/slow stop example
  Serial.println("clock wise");
  digitalWrite(DIRA,HIGH); //one way
  digitalWrite(DIRB,LOW);
  digitalWrite(ENABLE,HIGH); //enable on
  delay(5000);

  Serial.println("slow stop");
  digitalWrite(ENABLE,LOW); //slow stop
  
  delay(3000);

  Serial.println("counter clock wise");
  digitalWrite(DIRA,LOW); //one way
  digitalWrite(DIRB,HIGH);
  digitalWrite(ENABLE,HIGH); //enable on
  delay(8000);

  Serial.println("slow stop");
  digitalWrite(ENABLE,LOW); //slow stop
  delay(3000);
}  
