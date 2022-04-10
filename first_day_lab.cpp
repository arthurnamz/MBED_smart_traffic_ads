void setup() {
 pinMode(13,OUTPUT);
 pinMode(12,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  Serial.println("Blinking LED");
  // start -- pin 13 for switchinf on the green LED
  digitalWrite(13,HIGH);
  delay(1000);
  // end -- pin 13 for switching on the green LED
  
  // start -- pin 13 for switching off the green LED
  digitalWrite(13,LOW);
  delay(1000);
  // end -- pin 13 for switching off the green LED
  
  // Start -- pin 12 for switching on the red LED
  digitalWrite(12,HIGH);
  delay(1000);
  // end -- pin 12 for switching on the red LED
  
  // Start -- pin 12 for switching off the red LED
  digitalWrite(12,LOW);
  delay(1000);
  // end -- pin 12 for switching off the red LED
}

// 04th April 2022

void setup() {
 pinMode(13,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(8,OUTPUT);
 Serial.begin(9600);
}
void green_LED(){
  for(int i=0;i<3; i++){
   digitalWrite(13,HIGH);
   delay(500);
   Serial.println("Blinking LED");
   digitalWrite(13,LOW);
   delay(500);
  }
}
void white_LED(){
  for(int i=0;i<3; i++){
   digitalWrite(12,HIGH);
   delay(500);
   Serial.println("Blinking LED");
   digitalWrite(12,LOW);
   delay(500);
  }
}
void blue_LED(){
  for(int i=0;i<3; i++){
   digitalWrite(8,HIGH);
   delay(500);
   Serial.println("Blinking LED");
   digitalWrite(8,LOW);
   delay(500);
  }
}
void loop() {
  green_LED();
  white_LED();
  blue_LED();
}