int buzzer = 6; 
int pushbutton = 7;
int buttonstate = 0;
void setup()
{
    pinMode(6, OUTPUT);
    pinMode(7, INPUT);
}

void loop()
{
    buttonstate = digitalRead(7);
    if(buttonstate == HIGH){
        tone(6, 1000);
        delay(3000);
        noTone(6);
    }
}