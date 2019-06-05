#define pin13 13
#define pin11 11
#define pin9 9

void setup() 
{
  //set pinmodes
  pinMode(pin13, OUTPUT);

  //set initial values
  digitalWrite(pin13, HIGH);

  //open serial comm
  Serial.begin(9600);
}



void loop()
{
  if (Serial.available() > 0)
  {
    int command = Serial.parseInt();
    
    switch (command)
    {
      //FLOODS----------------
      case 11:
      {
        FloodOff();
      }
      case 12:
      {
        FloodOn();    
      }


      //SPOTS------------------
      case 21:
      {
        SpotOn();
      }
      case 22:
      {
        SpotOff();
      }


      //UTILITY-----------------
      case 31:
      {
        UtilityOn();
      }
      case 32:
      {
        UtilityOff();
      }
      case 33:
      {
        UtilityStrobe();
      }
      case 34:
      {
        UtilityMaint();
      }
    }
  }
}
