byte sensorPin = 3;
byte indicator = 13;
void setup() {
    pinMode(3, INPUT);
    pinMOde(13, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    byte state = digitalRead(sensorPin);
    digitalWrite(indicator, state);
    if(state == 1) Serial.println("Somebody is in this area!");
    else if(state == 0) Serial.println("No one!");
    delay(500);
}