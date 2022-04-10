#include "mbed.h"
#include "C12832.h"
DigitalOut yellowled(p5);
DigitalOut redled(p6);
DigitalIn button (p7);
C12832 lcd(SPI_MOSI, SPI_SCK, SPI_MISO, p8, p11);

int main() {
     while (1) {
         if (button ==1 ){
                lcd.printf("LED is Blinking");
              //  printf("Blink! Yellow LED is now %d\n", yellowled.read ());
                wait_ms(500);
                
                for(int i= 0; i<3; i++){
                yellowled = 1;
                printf("Blink! Yellow LED is now %d\n", yellowled.read ());
                wait_ms(500);
                yellowled = 0;
                printf("Blink! Yellow LED is now %d\n", yellowled.read ());
                wait_ms(500);
            }
            if (switchinput ==0){
                yellowled = 1;
                printf("Blink! Yellow LED is now %d\n", yellowled.read ());
                wait_ms(500);
                redled = 0;
                printf("Blink! Red LED is now %d\n", redled.read ());
                wait_ms(500);
            
        }
    lcd.printf("Christmas");
     }
  }
