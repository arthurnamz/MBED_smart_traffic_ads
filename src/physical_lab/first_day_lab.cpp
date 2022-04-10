// 04th April 2022 - First day for Physical lab

// Task 0ne of the first day lab

  /*This lab was about to put the theory which we learnt during the previous lab into practice. 
  It involved putting three LED on the bleadboard and blinking them. and we learnt on how we can select the voltage to use.
  we also learnt how the lines on the breadboard works
  Therefore Task one did not have the code, basically playing around with the hardware and how electronics works without controlling it with the arduino. 
  Here are the list of components given to play around with;
  1. Three LED(green, yellow, red) 
  2. The breadboard with the connector attached to it inorder to power up the bread board
  3. The USB which was connecting the breadboard to the laptop inorder to power up the breadboard
  4. The resistor and jumpers*/

//Start of Task two of the first day lab
/*This task introduced us on how to use arduino Uno to control the LED. where we learnt how to control the LED on the arduino board. we used the pin 13 since it has already have LED.
The following are the components given to control the LED;
  1. The Arduino uno R3
  2. The USB to connect the arduino to the laptop*/

void setup() {
 pinMode(13,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(500);
  Serial.println("Blinking LED");
}
//End of Task two of the first day lab

//Start of Task two of the first day lab
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