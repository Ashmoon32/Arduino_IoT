int red = 9, green = 10, blue = 11;
void setup()
{
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
}

void loop()
{
    RGB_color(255, 0, 0);
    delay(1000);
    RGB_color(0, 255, 0);
    delay(1000);
    RGB_color(0, 0, 255);
    delay(1000);
    RGB_color(255, 192, 203);
    delay(1000);
    RGB_color(0, 255, 255);
    delay(1000);
    RGB_color(255, 255, 0);
    delay(1000);
    RGB_color(255, 255, 255);
    delay(1000);
    RGB_color(255, 165, 0);
    delay(1000);
    RGB_color(75, 0, 130);
    delay(1000);
    RGB_color(210, 105, 30);
    delay(1000);
    RGB_color(70, 130, 180);
    delay(1000);
    RGB_color(238, 130, 238);
    delay(1000);
}

void RGB_color(int red_value, int green_value, int blue_value)
{
    analogWrite(9, red_value);
    analogWrite(10, green_value);
    analogWrite(11, blue_value);
}