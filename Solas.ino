//define pins//

#define pin13 13
#define pin11 11

int command = 6;

void setup() 
{
  pinMode(pin13, OUTPUT);
  digitalWrite(pin13, LOW);

  pinMode(pin11, OUTPUT);
  digitalWrite(pin11, LOW);

  Serial.begin(9600);
}

void loop() 
{
  if (Serial.available() > 0)
  {
    command = Serial.parseInt();
  }

  switch (command)
  {
    case 0:
    {
      digitalWrite(pin13, LOW);
    }

    case 1:
    {
      digitalWrite(pin13, HIGH);      
    }
  }


}
