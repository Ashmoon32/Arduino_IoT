void setup()
{
    pinMode(8, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    int value = analogRead(A0);
    digitalWrite(8, HIGH);
    delay(value);

    digitalWrite(8, LOW);
    delay(value);
    
    Serial.println(value);
}