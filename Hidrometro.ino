const byte pinSH = A0;
int humedad;

void setup()
{
  Serial.begin(9600);
  pinMode(pinSH, INPUT);
}

void loop()
{
  humedad = analogRead(pinSH);
  humedad = map(humedad, 0, 1023, 1023, 0);
  
  Serial.println(humedad);
}
