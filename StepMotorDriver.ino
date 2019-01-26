/* stepper motor control code for DRV8825
 * 
 */

 // define pin used
 const int stepPin = 9;
 const int dirPin = 8;
 int deg; 
 void setup() {
 // set the two pins as outputs
  pinMode(stepPin,OUTPUT);
  pinMode(dirPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {

deg=Serial.read();

if(deg==49){
for(int i=0;i<900;i++) { 
  digitalWrite(dirPin,LOW);
  //delayMicroseconds(170);
digitalWrite(stepPin,HIGH); //Enables the motor to move in a perticular direction
delayMicroseconds(170);
digitalWrite(stepPin,LOW); 
delayMicroseconds(170);
}
}
else if(deg==50)
{
  Serial.println(deg);
  for(int i=0;i<900;i++) { 
    
  digitalWrite(dirPin,HIGH); //Enables the motor to move in a perticular direction
//delayMicroseconds(170);
digitalWrite(stepPin,HIGH); //Enables the motor to move in a perticular direction
delayMicroseconds(170);
digitalWrite(stepPin,LOW); 
delayMicroseconds(170);
//digitalWrite(dirPin,LOW); 
//delayMicroseconds(170);

}
  }
  else{
    
    }
}
