
int x=0;
void setup()
{
 attachInterrupt(0,heart,RISING);
 Serial.begin(9600); 
  
}

void loop()
{
 Serial.println(x);
 delay(60000); 
  
}


void heart()
{
  x++;
  
}
