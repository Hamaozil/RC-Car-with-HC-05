//                                                                            RC car

// include softwareserial library
#include <SoftwareSerial.h>

// define left motor pins
#define LeftMotorA 6
#define LeftMotorB 7
#define LeftMotorSpeed 11

// define right motor pins
#define RightMotorA 8
#define RightMotorB 9
#define RightMotorSpeed 10

// define blutooth pins in arduino
#define rx  3
#define tx  2
SoftwareSerial Bluetooth(rx,tx);//Rx,Tx
void setup() {
  // initialize baud rate of bluetooth & Serial
  Bluetooth.begin(9600);
  Serial.begin(9600);
  
  // configure pins
  for(int i=6 ; i<=11 ; i++)
     pinMode(i,OUTPUT);
}
/*
values used in if body is from testing 
"Arduino bluetootn control app"
through Arrow keys 
 */
void loop() {
  // if data sent to bluetooth then check it 
  if (Bluetooth.available()>0)
  {
    int direction =Bluetooth.read();
    if (direction==51)// forward
       MakeMove(100,100);
    else if (direction==52)// backward
       MakeMove(-100,-100);
    else if (direction==50)// right
      MakeMove(100,-100);   
    else if (direction==49)// left
      MakeMove(-100,100);  
  }
  //else stop
  else 
      MakeMove(0,0); // stop   
}
