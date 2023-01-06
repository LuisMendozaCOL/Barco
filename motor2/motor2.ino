//www.elegoo.com
//2018.10.25

#include <SoftwareSerial.h>
char DATO;
//int LEDROJO = 3;
//int LEDVERDE = 2;

//variable - Motor
int ENABLE = 13;
int DIRA = 6;
int DIRB = 3;
int speedMotor = 0 ;
int stateMotor = 0 ;

/*
 * Initialize the serial port.
 */
void setup() {

  Serial.begin(9600);
  Serial.println("Arduino Iniciado");
  //pinMode(LEDROJO, OUTPUT);
  //pinMode(LEDVERDE, OUTPUT);
  pinMode(ENABLE,OUTPUT);
  pinMode(DIRA,OUTPUT);
  pinMode(DIRB,OUTPUT);
}


void loop( )
{
  // Bluetooth
  if (Serial.available()) {
    Serial.print("Received: ");
    DATO = Serial.read();
    //Serial.println("DATO: ");
    Serial.println(DATO);
    switch (DATO) {
      // Iniciar arduino con boton start
      case 'S':
      digitalWrite(DIRA,HIGH); //counter-clock-wise
      digitalWrite(DIRB,LOW);
      if (stateMotor == 0){
        stateMotor = 1;
        speedMotor=130; //no se puede poner mas baja porque el motor no gira
        analogWrite(ENABLE,speedMotor);
      }
      else{
        stateMotor=0;
        speedMotor=0;
        analogWrite(ENABLE,speedMotor);      
      }
      break;

      // aumentar velociadad del motor
      case 'u':
      if (stateMotor == 1)
      {
        speedMotor+= 30;
        if (-255 < speedMotor < 0){
          digitalWrite(ENABLE,LOW);
          delay(50);
          digitalWrite(DIRA,LOW); //clock-wise
          digitalWrite(DIRB,HIGH);
          delay(8000)
        }
        else
        {
          if (speedMotor >= 255 ){
            speedMotor = 255;
          }
          digitalWrite(ENABLE,LOW);
          delay(50);
          digitalWrite(DIRA,HIGH); //counter-clock-wise
          digitalWrite(DIRB,LOW);
        }
        analogWrite(ENABLE,speedMotor);      
      }
      break;
      
      case 'd':
      if (stateMotor == 1){
        speedMotor-= 30;
      /*  if (255 < speedMotor < 0){
          //digitalWrite(ENABLE,LOW);
          //delay(2000);
          digitalWrite(DIRA,HIGH); //counterclock-wise
          digitalWrite(DIRB,LOW);
        }
        else
        {
          if (speedMotor <= -255 ){
            speedMotor = -255;
          }
          digitalWrite(DIRA,LOW); //clock-wise
          digitalWrite(DIRB,HIGH);
        }
*/
        if (speedMotor <= -255 ){
          speedMotor = -255;
        }
        if (-255 < speedMotor < 0){
          digitalWrite(ENABLE,LOW);
          delay(50);
          digitalWrite(DIRA,LOW); //clock-wise
          digitalWrite(DIRB,HIGH);
          delay(8000)
        }
        analogWrite(ENABLE,speedMotor);      
      }
      break;  
    }

    Serial.print("Estado: ");
    Serial.println(stateMotor);
    Serial.print("Velocidad: ");
    Serial.println(speedMotor);
    
    }
} 
  
  
