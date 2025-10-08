int buz = 13;
void setup()
{
    pinMode(13, OUTPUT);
}

void loop()
{
    int melody[] = {264, 297, 330, 352, 396, 440, 496, 528};
    tone(13, melody[0]);
    delay(400);
    tone(13, melody[1]);
    delay(400);
    tone(13, melody[2]);
    delay(400);
    tone(13, melody[3]);
    delay(400);
    tone(13, melody[4]);
    delay(400);
    tone(13, melody[5]);
    delay(400);
    tone(13, melody[6]);
    delay(400);
    tone(13, melody[7]);
    delay(400);
}