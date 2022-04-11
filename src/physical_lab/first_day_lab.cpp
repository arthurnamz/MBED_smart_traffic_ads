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
  /*
  This task introduced us on how to use arduino Uno to control the LED. where we learnt how to control the LED on the arduino board. we used the pin 13 since it has already have LED.
  The following are the components given to control the LED;
    1. The Arduino uno R3
    2. The USB to connect the arduino to the laptop
    */

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

//Start of Task three of the first day lab
  /*
This task I was asked to use the arduino board to control the LED but this time instead of using the LED which are embedded  on the arduino board I will using the LED through the breadboard. 
we used the pin 13, pin 12 and pin 12 and all of them were the output.
  The following are the components given to control the LED;
    1. The Arduino uno R3
    2. The USB to connect the arduino to the laptop
    3. Four LED(green, yellow, red, white) 
    4. The breadboard at this moment breadboard will use the power supply from the arduino board.
    5. The resistors and jumpers
  */
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
//End of Task three of the first day lab

//Start of Task four of the first day lab
  /*
This task I was asked to use the arduino board to control the LED but this time it will be depending on the Light Dependent Resistor to detect the light intensity, then based on the light intensity which you are obtaining you will put the conditional statement to control the LED to to turn or off. 
Mine the minimum light intensity was 20 then I set that if the light intensity is below 20 then turn on the LED and if it is 20 and above the LED should turn off. 
we used the pin 11 as the output.
  The following are the components given to control the LED;
    1. The Arduino uno R3
    2. The USB to connect the arduino to the laptop
    3. Red LED 
    4. The breadboard at this moment breadboard will use the power supply from the arduino board.
    5. The resistors and jumpers
    6. Light Dependent Resistor
  */
int LDR_value = A0; // voltage divider analog pin
int LEDpin = 12; // LED on  pin 12
int min_value = 20; // minimum light intensity
int light_intensity;

 void setup() {
 pinMode(12,OUTPUT);
 Serial.begin(9600);
}
void loop() {
  light_intensity = analogRead(LDR_value);
  Serial.println(light_intensity);
  if(light_intensity < min_value){
    digitalWrite(12,HIGH);
    Serial.println("LED ON");
  }
  else{
    digitalWrite(12,LOW);
    Serial.println("LED OFF");
  }
}
//End of Task four of the first day lab