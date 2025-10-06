int LM35pin = A0;
int readingfromADC;
float Outputvoltage;
float temperatureC;
float temperatureF;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    readingfromADC = analogRead(A0);
    Outputvoltage = readingfromADC * (500 / 1024.0);
    temperatureC = Outputvoltage / 10;
    Serial.print(temperatureC);
    Serial.print("\xC2\xB0");
    Serial.println("C");
    temperatureF = (Outputvoltage * 1.8) + 32;
    Serial.print(temperatureF);
    Serial.pirnt("\xC2\xB0");
    Serial.println("F");
    delay(1000);
}