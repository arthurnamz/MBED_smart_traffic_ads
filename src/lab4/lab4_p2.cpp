#include "mbed.h"
 
InterruptIn button(SW2);
DigitalOut led(LED1);
DigitalOut flash(LED4);
 
void flip() {
    led = !led;
}
 
int main() {
    button.rise(&flip);  // attach the address of the flip function to the rising edge
    while(1) {           // wait around, interrupts will interrupt this!
        flash = !flash;
        wait(0.25);
    }
}

InterruptIn button(p7);
Timeout flipper;
DigitalOut yellowled(p5);
DigitalOut redled(p6);
PwmOut sound(p21);

void play_sound(float f, float v, int i, int r) { //f = frequency, v = volume, i = interval, and r = rest
    sound.period(1.0 / f);
    sound = v;
    wait(i);
    sound = 0.0;
    wait(r);
}
void yellowBlink() {
    yellowled = 1;
    play_sound(200.0, 0.7, 1, 2);
    wait_ms(100);
    redled = 0;
    wait_ms(100);
}

int main() {
   button.rise(&yellowBlink);
    while (1) {
         wait_ms(500);
        
        if ((switchinput ==1) && (yellowled == 1)) {
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
                // wait_ms(1000);
                // redled = 0;
                // printf("Blink! Red LED is now %d\n", redled.read ());
                // wait_ms(1000);

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

#include "mbed.h"

InterruptIn button(p7);
Timeout flipper;
DigitalOut yellowled(p5);
DigitalOut redled(p6);
PwmOut sound(p21);

void play_sound(float f, float v, int i, int r) { //f = frequency, v = volume, i = interval, and r = rest
    sound.period(1.0 / f);
    sound = v;
    wait(i);
    sound = 0.0;
    wait(r);
}
void yellowBlink() {
    yellowled = 1;
    // play_sound(200.0, 0.7, 1, 2);
    // wait_ms(100);
    // yellowled = 0;
    // wait_ms(100);
}
void flip() {
    for (int i = 0; i < 5; i++)
    {
        yellowled = 1;
        play_sound(200.0, 0.7, 1, 2);
        wait_ms(100);
        yellowled = 0;
        wait_ms(100);
    }

}

int main() {
    wait_ms(500);
  yellowled = 1;
  flipper.attach(&flip, 2.0);
    while (1) {
        
        button.rise(&yellowBlink);
        wait_ms(500);
         
    }
     wait_ms(500);
}
