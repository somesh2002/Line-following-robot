int ldr_left=2;
int ldr_right=3; 
int lm1=8,lm2=9; /* LM = Left motor */
int rm1=10,rm2=11; /* LM = Right motor */

int sensor_l=0 ,sensor_r=0 , motor=0 ;


void setup()
{
  Serial.begin(9600);
  pinMode(ldr_left , INPUT);
  pinMode(ldr_right , INPUT);
  pinMode(lm1,OUTPUT);
  pinMode(lm2,OUTPUT);
  pinMode(rm1,OUTPUT);
  pinMode(rm2,OUTPUT);
  }

 void loop()
 {
  sensor_l=digitalRead(ldr_left);
  sensor_r=digitalRead(ldr_right);


  if(sensor_l==0 && sensor_r==1)
    {
      left();
      }
  else if(sensor_l==1 && sensor_r==0)
    {
      right();
      }
  else if(sensor_l==1 && sensor_r==1)
    {
      front();
      }
   else
   {
    still();
    }
  

  
  delay(100);
  }



  void left()
  {
    digitalWrite(lm1,HIGH);
    digitalWrite(lm2,LOW);
    digitalWrite(rm1,LOW);
    digitalWrite(rm2,HIGH);
    
    }


   
  void right()
  {
    digitalWrite(lm1,LOW);
    digitalWrite(lm2,HIGH);
    digitalWrite(rm1,HIGH);
    digitalWrite(rm2,LOW);
    
    }


    
  void front()
  {
    digitalWrite(lm1,LOW);
    digitalWrite(lm2,HIGH);
    digitalWrite(rm1,LOW);
    digitalWrite(rm2,HIGH);
    
    }
   
  void still()
  {
    digitalWrite(lm1,LOW);
    digitalWrite(lm2,LOW);
    digitalWrite(rm1,LOW);
    digitalWrite(rm2,LOW);
    
    }
