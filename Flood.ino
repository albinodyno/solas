
//All commands for FLOODS
void FloodOn()
{
  digitalWrite(pin13, LOW);
}

void FloodOff()
{
  digitalWrite(pin13, HIGH);
}

void FloodStrobe()
{
  digitalWrite(pin13, LOW);
  delay(500);
  digitalWrite(pin13, HIGH);
  delay(500);  
}
