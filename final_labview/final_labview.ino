#include <TimerOne.h>
int rate=0;
int temp;
int time=0;
void setup()
{
  Timer1.initialize(5000000); // set a timer of length 100000 microseconds (or 0.1 sec - or 10Hz => the led will blink 5 times, 5 cycles of on-and-off, per second)
  Timer1.attachInterrupt( herat_rate_send ); // attach the service routine here
  attachInterrupt(0,heart_rate_increment,RISING);
  Serial.begin(9600);
  Serial3.begin(9600);
  pinMode(A2,OUTPUT);
  digitalWrite(A2,HIGH);
}

void loop()
{
  temp=analogRead(8)*0.4887;//
  
  delay(1000);
  
  
}

void herat_rate_send()
{
  time++;
  if(time>=3)
  {
  Serial.print('a');
  Serial.print(temp);
  Serial.print('b');
  Serial.print(4*rate);
  
  Serial3.print('a');
  Serial3.print(temp);
  Serial3.print('b');
  Serial3.print(4*rate);
  rate=0;
  time=0;
  }
}

void heart_rate_increment()
{
  
 rate++; 
}
