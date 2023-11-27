void MakeMove(int LeftSpeed , int RightSpeed)
{
  if (LeftSpeed<0)//backward for left motor
  {
     digitalWrite(LeftMotorA,HIGH);
     digitalWrite(LeftMotorB,LOW);  
     LeftSpeed*=-1;//assign possitive speed
  }
  else 
  {
    digitalWrite(LeftMotorA,LOW);
    digitalWrite(LeftMotorB,HIGH);   
  }
  
  if (RightSpeed<0)//backward for right motor
  {
     digitalWrite(RightMotorA,HIGH);
     digitalWrite(RightMotorB,LOW);  
     RightSpeed*=-1;//assign possitive speed
  }
  else
  {
     digitalWrite(RightMotorA,LOW);
     digitalWrite(RightMotorB,HIGH);  
  }  

  analogWrite(LeftMotorSpeed,LeftSpeed);
  analogWrite(RightMotorSpeed,RightSpeed);
}
