int buzzer = 5;
int red = 6;
int blue = 7;

void setup()
{
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
}

void loop()
{
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    tone(5, 1000);
    delay(300);

    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    tone(5, 1200);
    delay(300);
}