#include "mbed.h"

DigitalOut yellowled(p5);
DigitalOut redled(p6);
DigitalIn switchinput (p7);
PwmOut sound(p21);

void play_sound(float f, float v, int i, int r) { //f = frequency, v = volume, i = interval, and r = rest
    sound.period(1.0 / f);
    sound = v;
    wait(i);
    sound = 0.0;
    wait(r);
}

int main() {
   
    while (1) {
        
        if (switchinput ==1 ){
                yellowled = 0;
                printf("Blink! Yellow LED is now %d\n", yellowled.read ());
                wait_ms(500);
                
                for(int i= 0; i<5; i++){
                yellowled = 1;
                play_sound(200.0, 0.7, 1, 2);
                printf("Blink! Yellow LED is now %d\n", yellowled.read ());
                wait_ms(500);
                yellowled = 0;
                printf("Blink! Yellow LED is now %d\n", yellowled.read ());
                wait_ms(500);
            }
                redled = 1;
                printf("Blink! Red LED is now %d\n", redled.read ());
                wait_ms(1000);
                redled = 0;
                printf("Blink! Red LED is now %d\n", redled.read ());
                wait_ms(1000);

        }
        if (switchinput ==0){
                yellowled = 1;
                printf("Blink! Yellow LED is now %d\n", yellowled.read ());
                wait_ms(500);
                redled = 0;
                printf("Blink! Red LED is now %d\n", redled.read ());
                wait_ms(500);
            
        }
    }
}
