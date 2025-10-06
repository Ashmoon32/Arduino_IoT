int buzzer = 5;
int red = 6, blue = 7;
void setup()
{
    pinMode(red, OUTPUT);
    pinMode(blue, OUTPUT);
    pinMOde(buzzer, OUTPUT);
}

void loop()
{
    digitalWrite(red, HIGH);
    digitalWrite(blue, LOW);
    tone(buzzer, 1000);
    delay(300);

    digitalWrite(red, LOW);
    digitalWrite(blue, HIGH);
    tone(buzzer, 1200);
    delay(300);
}