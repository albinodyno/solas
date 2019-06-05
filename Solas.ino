//define pins
#define pin13 13

int command = 6;

void setup() 
{
  pinMode(pin13, OUTPUT);
  digitalWrite(pin13, HIGH);

  Serial.begin(9600);
}

void loop()
{
  //get command
  if (Serial.available() > 0)
  {
    command = Serial.parseInt();
  }

  //switch on command
  switch (command)
  {
    //FLOODS
    case 0:
    {
      digitalWrite(pin13, HIGH);
    }
    case 1:
    {
      digitalWrite(pin13, LOW);    
    }
  }
}
