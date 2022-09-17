int LightSensorVal = 0;

int PIRSensorVal = 0;

int RelayOutputVal = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(2, INPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  LightSensorVal = analogRead(A0);
  PIRSensorVal = digitalRead(2);
  RelayOutputVal = 8;
  if (LightSensorVal < 600) 
  {
    if (PIRSensorVal == HIGH)
    {
      digitalWrite(8, HIGH);
      delay(5000);
    }
  }
}
