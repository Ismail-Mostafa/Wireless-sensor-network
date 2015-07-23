byte x,y;
byte z[4];
void setup()
{
  Serial.begin(9600);

}

void loop()
{
x=analogRead(0)*0.48875; 
y=analogRead(1)*0.48875;

Serial.print('a'); 
Serial.print(x);
Serial.print('b'); 
Serial.println(y);
delay(500);

 
}
