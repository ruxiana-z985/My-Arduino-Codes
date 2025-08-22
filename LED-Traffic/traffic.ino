int pin1=7;
int pin2=2;
int pin3=4;

void setup()
{
  pinMode(pin1, OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
}

void loop()
{
  digitalWrite(pin1, HIGH);
  delay(3000); 
  digitalWrite(pin1, LOW);
  digitalWrite(pin2,HIGH);
  delay(1000);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  delay(2000);
  digitalWrite(pin3,LOW); 
}
