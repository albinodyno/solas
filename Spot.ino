
//All commands for SPOTS
void SpotOn()
{
  digitalWrite(pin11, LOW);
}

void SpotOff()
{
  digitalWrite(pin11, HIGH);
}

void SpotStrobe()
{
  digitalWrite(pin11, LOW);
  delay(500);
  digitalWrite(pin11, HIGH);
  delay(500);  
}
