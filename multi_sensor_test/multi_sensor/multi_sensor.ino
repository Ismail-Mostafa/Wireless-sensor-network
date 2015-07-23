int t1,t2;
void setup()
{
 Serial.begin(9600); 
}

void loop()
{
  t1=analogRead(0)*0.48875;
  //t2=analogRead(1)*0.48875;
  //t1=17;
  t2=28;
  Serial.write('a');
  Serial.print(t1);
  Serial.write('b');
  Serial.print(t2);
  delay(100);  
}
