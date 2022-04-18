/*1.	Task one 
This task introduced us on how combine different sensors and apply the real-life situation. use of the data generated from the sensor to control the LED. If the person is 100 centimeters to the sensor it will invoke the red LED to turn on and make buzzer produce the sound. If a person is within 100 centimeters to 150 centimeters it will invoke the yellow LED to turn it on as a warning and if a person is at a distance which is greater than 150 centimeters, it will turn the green which means everything is ok. The following are the components were used. 
i.	The Arduino Uno R3
ii.	The USB to connect the Arduino to the laptop
iii.	Buzzer
iv.	Ultrasonic Distance Sensor
v.	Three LED (yellow, green, and Red)
vi.	Breadboard
vii.	Jumpers */

   //start of Task two code
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
//End of Task two code
