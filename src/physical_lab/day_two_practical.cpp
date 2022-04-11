int trigPin = 6; 
int echoPin = 7; 
int redLED = 11; 
int greenLED = 12;
int yellowLED = 13;  
float duration, distance;
void setup()
{
Serial.begin(9600); 
pinMode(redLED, OUTPUT);
pinMode(greenLED, OUTPUT);
pinMode(yellowLED, OUTPUT);
pinMode(trigPin, OUTPUT); 
pinMode(8, OUTPUT);
}
void loop()
{
digitalWrite(echoPin, LOW); 
digitalWrite(trigPin, LOW);
delay(500);
//Serial.println("LED is Blinking");
digitalWrite(trigPin, HIGH); 
delay(500);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH); 
distance = (duration/2.0)*0.0343;

if(distance < 100 ) {
digitalWrite(redLED, HIGH);
tone(8, 100);
digitalWrite(yellowLED, LOW);
digitalWrite(greenLED, LOW);
Serial.print("Distance : ");
Serial.print(distance, 1); Serial.println(" cm");
}
if (distance >= 100 && distance < 150 ){
digitalWrite(yellowLED, HIGH);
digitalWrite(redLED, LOW);
digitalWrite(greenLED, LOW);
noTone(8);
Serial.print("Distance : ");
Serial.print(distance, 1); Serial.println(" cm");
}
if (distance >= 150 ){
digitalWrite(greenLED, HIGH); 
digitalWrite(redLED, LOW);
digitalWrite(yellowLED, LOW);
noTone(8);
Serial.print("Distance : ");
Serial.print(distance, 1); Serial.println(" cm and therefore, It is out of range");

}
}