//www.elegoo.com
//2017.12.12

/************************
Exercise the motor using
the L293D chip
************************/

int ENABLE = 11;
int DIRA = 12;
int DIRB = 10;
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
  /*
  //---back and forth example
    Serial.println("One way, then reverse");
    digitalWrite(ENABLE,HIGH); // enable on
    for (i=0;i<5;i++) {
    digitalWrite(DIRA,HIGH); //one way
    digitalWrite(DIRB,LOW);
    delay(500);
    digitalWrite(DIRA,LOW);  //reverse
    digitalWrite(DIRB,HIGH);
    delay(500);
  }
  digitalWrite(ENABLE,LOW); // disable
  delay(2000);
*/
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
  delay(5000);

  Serial.println("slow stop");
  digitalWrite(ENABLE,LOW); //slow stop
  
  // delay(3000);

/*
  Serial.println("PWM full then slow");
  //---PWM example, full speed then slow
  analogWrite(ENABLE,255); //enable on
  digitalWrite(DIRA,HIGH); //one way
  digitalWrite(DIRB,LOW);
  delay(2000);
  analogWrite(ENABLE,180); //half speed
  delay(2000);
  analogWrite(ENABLE,128); //half speed
  delay(2000);
  analogWrite(ENABLE,50); //half speed
  delay(2000);
  analogWrite(ENABLE,128); //half speed
  delay(2000);
  analogWrite(ENABLE,180); //half speed
  delay(2000);
  analogWrite(ENABLE,255); //half speed
  delay(2000);
  digitalWrite(ENABLE,LOW); //all done
  delay(10000);
  */
}
   
