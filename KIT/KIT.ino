int temp;
int clock=2;
void setup()
{
 Serial.begin(9600);
 pinMode(A2,OUTPUT);
 digitalWrite(A2,HIGH);
 pinMode(clock,INPUT);
}


void loop()
{
 temp=analogRead(8)*0.4887;
 Serial.println(temp);
 delay(500); 
  
}
