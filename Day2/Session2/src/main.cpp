// Development Plan: Commit the code each time a step is completed.
// [x] Write and build the boilerplate code for Arduino (#include<Arduino.h>, setup(), loop())
// [x] Open the simulator
// [x] Make the red LED flash on and off once every 50 milliseconds.
// [x] Make the red LED flash on and off only if one of the buttons is being pressed.
// [x] Turn on an LED when the button of a corresponding color is held down.
// [x] The blue LED should be different; it should turn off when its button is pressed, not on.
// [ ] The green LED should be a switch; when its button is pressed, it should change from staying on to staying off, then go back the next time it's pressed.
// [ ] When the red button is pressed, it should turn on for a couple of seconds, then automatically turn back off.
// [ ] All buttons' LEDs should respond as soon as they are pressed.

#include <Arduino.h>

void setup(){
    //red
    pinMode(3,OUTPUT);
    //green
    pinMode(4,OUTPUT);
    //purple
    pinMode(5,OUTPUT);
    //red button
    pinMode(11,INPUT);
    //green button
    pinMode(10,INPUT);
    //purple button
    pinMode(9,INPUT);
}

void loop() {
    // Red
    int pinStateRed = digitalRead(11);
    if (pinStateRed == 1) {
        digitalWrite(3, LOW);
        delay(50);
        digitalWrite(3, HIGH);
        delay(50);
    }
    if (pinStateRed == 0) {
        digitalWrite(3, LOW);
        }
        //green
    int pinStateGreen = digitalRead(10);
    if (pinStateGreen == 1) {
        digitalWrite(4, LOW);
        delay(50);
        digitalWrite(4, HIGH);
        delay(50);
    }
    if (pinStateGreen == 0) {
        digitalWrite(4, LOW);
    }
    // purple light
    int pinStatePurple = digitalRead(9);
    digitalWrite(5,OUTPUT);
    if (pinStatePurple == 1){
        digitalWrite(5,LOW);
        delay(500);
    }

}

