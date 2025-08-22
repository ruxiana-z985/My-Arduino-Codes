int D_PIN = 4;
void setup()
{
  pinMode(D_PIN, OUTPUT);
}

void loop()
{
 digitalWrite(D_PIN,HIGH);
 delay(1000); //wait 1 sec(1000 milisecond)
 digitalWrite(D_PIN,LOW);
 delay(1000); //wait 1 sec(1000 milisecond)
}
