#include <SoftwareSerial.h>
char DATO;

//variable - Motor
int ENABLE = 11;
int DIRA = 12;
int DIRB = 13;
int speedMotor = 0 ;
int stateMotor = 0 ;

/*
 * Initialize the serial port.
 */
void setup() {
  Serial.begin(38400);
  Serial.println("Arduino Iniciado");
  Serial2.begin(9600);
  Serial.println("BT Iniciado");
  pinMode(ENABLE,OUTPUT);
  pinMode(DIRA,OUTPUT);
  pinMode(DIRB,OUTPUT);
}


void loop()
{
  // Bluetooth
  if (Serial2.available())
  {
    Serial.print("Received: ");
    DATO = Serial2.read();
    Serial.println(DATO);
    switch (DATO) {
      // Iniciar arduino con boton start
      case 'a':
      Serial.println("clock wise");
      digitalWrite(DIRA,HIGH); //one way
      digitalWrite(DIRB,LOW);
      digitalWrite(ENABLE,HIGH); //enable on
      break;
      // aumentar velociadad del motor
      case 'b':
      Serial.println("slow stop");
      digitalWrite(ENABLE,LOW); //slow stop
      
      delay(3000);
      break;
      // Dismuir velocidadad del motor
      case 'c':
      Serial.println("counter clock wise");
      digitalWrite(DIRA,LOW); //one way
      digitalWrite(DIRB,HIGH);
      digitalWrite(ENABLE,HIGH); //enable on
      break;  
    }
  }
   
}  
   
