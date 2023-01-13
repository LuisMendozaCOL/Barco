//www.elegoo.com
//2018.10.25

#include <SoftwareSerial.h>
char DATO;
//int LEDROJO = 3;
//int LEDVERDE = 2;

/*
 * Initialize the serial port.
 */
void setup() {

  Serial.begin(9600);
  Serial.println("Arduino Iniciado");
<<<<<<< HEAD
  pinMode(LEDROJO, OUTPUT);
  pinMode(LEDVERDE, OUTPUT);
=======
  Serial2.begin(9600);
  Serial.println("BT Iniciado");
  //pinMode(LEDROJO, OUTPUT);
  //pinMode(LEDVERDE, OUTPUT);
>>>>>>> 81bd4b1b985202c57ae85df6eaea068a169c8efa
}


void loop()
{
  // Bluetooth
  if (Serial.available()) {
    Serial.print("Received: ");
    DATO = Serial.read();
    Serial.println(DATO);
  }
/*
   switch (DATO){
    case '1':
    digitalWrite(LEDROJO, HIGH);
    break;
    case '2':
    digitalWrite(LEDVERDE, HIGH);
    break;
    case '3':
    digitalWrite(LEDROJO, LOW);
    break;
    case '4':
    digitalWrite(LEDVERDE, LOW);
    break;
  }
 */
  
                              
  /*
  if (Serial.available())
  BT.write(Serial.read()); //lee Arduino y envia a BT
  */
}
