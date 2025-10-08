int led = 13, PIR = 3, buzzer = 7;
int sensorvalue = 0;
void setup()
{
    pinMode(13, OUTPUT);
    pinMode(3, INPUT);
    pinMode(7, OUTPUT);
    Serial.begin(9600);
    
}

void loop()
{
    int sensorvalue = digitalRead(PIR); // overlap declaration 
    Serial.println(sensorvalue);
    if(sensorvalue == HIGH) {
        digitalWrite(13, HIGH);
        digitalWrite(7, HIGH);
    }else{
        digitalWrite(13, LOW);
        digitalWrite(7, LOW);
    }

}