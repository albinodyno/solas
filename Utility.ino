
//All commands for UTILITY
void UtilityOn()
{
  digitalWrite(pin9, LOW);
}

void UtilityOff()
{
  digitalWrite(pin9, HIGH);
}

void UtilityStrobe()
{
  digitalWrite(pin9, LOW);
  delay(500);
  digitalWrite(pin9, HIGH);
  delay(500);  
}

void UtilityMaint()
{
  digitalWrite(pin9, LOW);
  delay(1000);
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(pin9, HIGH);
    delay(200);
    digitalWrite(pin9, LOW);
    delay(200);
  }
  digitalWrite(pin9, HIGH);
  delay(1000); 
}

void UtilitySOS()
{
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(pin9, HIGH);
    delay(300);
    digitalWrite(pin9, LOW);
    delay(300);
  }
  
  delay(1500);
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(pin9, HIGH);
    delay(1000);
    digitalWrite(pin9, LOW);
    delay(300);
  }
  
  delay(1500);
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(pin9, HIGH);
    delay(300);
    digitalWrite(pin9, LOW);
    delay(300);
  }
  delay(3000);  
}
