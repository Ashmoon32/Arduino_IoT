int triggerPin = 13;
int echoPin = 12;
float duration;
float distance;

void setup()
{
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);  
}

void loop()
{
    digitalWrite(triggerPin, LOW);
    delayMicroseconds(2);
    digitalWrite(triggerPin, HIGH );
    delayMicroseconds(10);
    digitalWrite(triggerPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2;
    Serial.print("\nDistance:");
    Serial.print(distance);
    Serial.println("cm");
    delay(100); // missed
}