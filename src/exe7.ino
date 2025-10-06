int buzzer = 7;
int pushbutton = 8;
int buttonstate = 0;

void setup()
{
    pinMode(buzzer, OUTPUT);
    pinMode(pushbutton, INPUT);
}

void loop()
{
    buttonstate = digitalRead(pushbutton);
    if (buttonstate == HIHG)
    {
        tone(7, 1000);
        delay(3000);
    }
    else
    {
        noTone(7);
    }
}