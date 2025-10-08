#define trigPin 12
#define echoPin 11
#define led1 6
#define led2 7
long duration;
int distance;
void setup()
{
 pinMode(12, OUTPUT); // write trigPin instead of 12(pin)
 pinMode(11, INPUT); // write echoPin instead of 11(pin)
 Serial.begin(9600);   
}

void loop()
{
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH );
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2;
    Serial.print("\nDistance:");
    Serial.print(distance);
    if(distance <= 20) {
        digitalWrite(led1, HIGH);
        delay(200); //missed
        digitalWrite(led2, LOW);
        delay(200);
    }else{
        digitalWrite(led2, HIGH);
        delay(200); //missed
        digitalWrite(led1, LOW);
        delay(200);
    }
}