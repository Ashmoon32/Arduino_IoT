int red = 9, green = 10, blue = 11;
void setup()
{
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
}

void loop()
{
    RGB_color(255, 0, 0); // red
    delay(1000);
    RGB_color(0, 0, 255); // blue
    delay(1000);
    RGB_color(0, 255, 0); // green
    delay(1000);
    RGB_color(255, 192, 203); // pink
    delay(1000);
    RGB_color(0, 255, 255); // cyan
    delay(1000);
    RGB_color(255, 255, 0); // yellow
    delay(1000);
    RGB_color(255, 255, 255); // white
    delay(1000);
    RGB_color(255, 165, 0); // orange
    delay(1000);
    RGB_color(75, 0, 130); // indigo
    delay(1000);
    RGB_color(210, 105, 30); // chocolate
    delay(1000);
    RGB_color(70, 130, 180); // steel blue
    delay(1000);
    RGB_color(238, 130, 238); // violet
    delay(1000);
}

void RGB_color(int red_value, int green_value, int blue_value)
{
    analogWrite(9, red_value);
    analogWrite(10, green_value);
    analogWrite(11, blue_value);
}