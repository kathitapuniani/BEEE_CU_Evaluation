void setup ()
{
 pinMode(2,INPUT);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 
}

void loop ()
{
 
 int reading = analogRead(A0);
 int type = digitalRead(2);
 delay(500);
  if(reading>40)
{
  if(type == HIGH)
  {
     digitalWrite(3,HIGH);
  }
    else
   {
    digitalWrite(3,LOW);
   }

}

else if(reading<40)
{
  if(type== HIGH)
  {
     digitalWrite(4,HIGH);
  }
    else
   {
    digitalWrite(4,LOW);
   }
 }

 else
 {
   digitalWrite(3,LOW);  
   digitalWrite(4,LOW); 

 }
 
}
