#include "Keyboard.h"

//declaring button pins
const int buttonPin2 = 2;   
const int buttonPin3 = 3;  
const int buttonPin4 = 4;   
const int buttonPin5 = 5;  
const int buttonPin6 = 6;   
const int buttonPin7 = 7;  
const int buttonPin8 = 8;   
const int buttonPin9 = 9; 
const int buttonPin10 = 10;  
const int buttonPin15 = 13;   
const int buttonPin14 = 14; 
const int buttonPin16 = 16;          

int previousButtonState2 = HIGH;
int previousButtonState3 = HIGH; 
int previousButtonState4 = HIGH;
int previousButtonState5 = HIGH; 
int previousButtonState6 = HIGH;
int previousButtonState7 = HIGH; 
int previousButtonState8 = HIGH;
int previousButtonState9 = HIGH; 
int previousButtonState10 = HIGH;
int previousButtonState14= HIGH; 
int previousButtonState15= HIGH;
int previousButtonState16= HIGH; 

void setup() {
  //declare the buttons as input_pullup
  pinMode(buttonPin2, INPUT_PULLUP);  
  pinMode(buttonPin3, INPUT_PULLUP); 
  pinMode(buttonPin4, INPUT_PULLUP);  
  pinMode(buttonPin5, INPUT_PULLUP); 
  pinMode(buttonPin6, INPUT_PULLUP);  
  pinMode(buttonPin7, INPUT_PULLUP); 
  pinMode(buttonPin8, INPUT_PULLUP);  
  pinMode(buttonPin9, INPUT_PULLUP); 
  pinMode(buttonPin10, INPUT_PULLUP);  
  pinMode(buttonPin16, INPUT_PULLUP); 
  pinMode(buttonPin15, INPUT_PULLUP);  
  pinMode(buttonPin14, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  //checking the state of the button
  int buttonState2 = digitalRead(buttonPin2);
  int buttonState3 = digitalRead(buttonPin3);
  
 //replaces button press with UP arrow
  if (buttonState2 == LOW && previousButtonState2 == HIGH) {
      // and it's currently pressed:
    Keyboard.press(97);
    delay(50);
  }

  if (buttonState2 == HIGH && previousButtonState2 == LOW) {
      // and it's currently released:
    Keyboard.release(97);
    delay(50);
  }
  previousButtonState2 = buttonState2;

  //replaces button press with UP arrow
  if (buttonState3 == LOW && previousButtonState3 == HIGH) {
      // and it's currently pressed:
    Keyboard.press(83);
    delay(50);
  }

  if (buttonState3 == HIGH && previousButtonState3 == LOW) {
      // and it's currently released:
    Keyboard.release(83);
    delay(50);
  }
  previousButtonState3 = buttonState3;
//////////////////

  //checking the state of the button
  int buttonState4 = digitalRead(buttonPin4);
  int buttonState5 = digitalRead(buttonPin5);
  
 //replaces button press with UP arrow
  if (buttonState4 == LOW && previousButtonState4 == HIGH) {
      // and it's currently pressed:
    Keyboard.press(68);
    delay(50);
  }

  if (buttonState4 == HIGH && previousButtonState4 == LOW) {
      // and it's currently released:
    Keyboard.release(68);
    delay(50);
  }
  previousButtonState4 = buttonState4;

  //replaces button press with UP arrow
  if (buttonState5 == LOW && previousButtonState5 == HIGH) {
      // and it's currently pressed:
    Keyboard.press(87);
    delay(50);
  }

  if (buttonState5 == HIGH && previousButtonState5 == LOW) {
      // and it's currently released:
    Keyboard.release(87);
    delay(50);
  }
  previousButtonState5 = buttonState5;
///////////////////////////

  //checking the state of the button
  int buttonState6 = digitalRead(buttonPin6);
  int buttonState7 = digitalRead(buttonPin7);
  
 //replaces button press with UP arrow
  if (buttonState6 == LOW && previousButtonState6 == HIGH) {
      // and it's currently pressed:
    Keyboard.press(70);
    delay(50);
  }

  if (buttonState6 == HIGH && previousButtonState6 == LOW) {
      // and it's currently released:
    Keyboard.release(70);
    delay(50);
  }
  previousButtonState6 = buttonState6;

  //replaces button press with UP arrow
  if (buttonState7 == LOW && previousButtonState7 == HIGH) {
      // and it's currently pressed:
    Keyboard.press(69);
    delay(50);
  }

  if (buttonState7 == HIGH && previousButtonState7 == LOW) {
      // and it's currently released:
    Keyboard.release(69);
    delay(50);
  }
  previousButtonState7 = buttonState7;
//////////////////

  //checking the state of the button
  int buttonState8 = digitalRead(buttonPin8);
  int buttonState9 = digitalRead(buttonPin9);
  
 //replaces button press with UP arrow
  if (buttonState8 == LOW && previousButtonState8 == HIGH) {
      // and it's currently pressed:
    Keyboard.press(71);
    delay(50);
  }

  if (buttonState8 == HIGH && previousButtonState8 == LOW) {
      // and it's currently released:
    Keyboard.release(71);
    delay(50);
  }
  previousButtonState8 = buttonState8;

  //replaces button press with UP arrow
  if (buttonState9 == LOW && previousButtonState9 == HIGH) {
      // and it's currently pressed:
    Keyboard.press(74);
    delay(50);
  }

  if (buttonState9 == HIGH && previousButtonState9 == LOW) {
      // and it's currently released:
    Keyboard.release(74);
    delay(50);
  }
  previousButtonState9 = buttonState9;



////////////


  //checking the state of the button
  int buttonState10 = digitalRead(buttonPin10);
  int buttonState14 = digitalRead(buttonPin14);
  
 //replaces button press with UP arrow
  if (buttonState10 == LOW && previousButtonState10 == HIGH) {
      // and it's currently pressed:
    Keyboard.press(75);
    delay(50);
  }

  if (buttonState10 == HIGH && previousButtonState10 == LOW) {
      // and it's currently released:
    Keyboard.release(75);
    delay(50);
  }
  previousButtonState10 = buttonState10;

  //replaces button press with UP arrow
  if (buttonState14 == LOW && previousButtonState14 == HIGH) {
      // and it's currently pressed:
    Keyboard.press(76);
    delay(50);
  }

  if (buttonState14 == HIGH && previousButtonState14 == LOW) {
      // and it's currently released:
    Keyboard.release(76);
    delay(50);
  }
  previousButtonState14 = buttonState14;

  ////////////


  //checking the state of the button
  int buttonState15 = digitalRead(buttonPin15);
  int buttonState16 = digitalRead(buttonPin16);
  
 //replaces button press with UP arrow
  if (buttonState15 == LOW && previousButtonState15 == HIGH) {
      // and it's currently pressed:
    Keyboard.press(66);
    delay(50);
  }

  if (buttonState15 == HIGH && previousButtonState15 == LOW) {
      // and it's currently released:
    Keyboard.release(66);
    delay(50);
  }
  previousButtonState15 = buttonState15;

  //replaces button press with UP arrow
  if (buttonState16 == LOW && previousButtonState16 == HIGH) {
      // and it's currently pressed:
    Keyboard.press(80);
    delay(50);
  }

  if (buttonState16 == HIGH && previousButtonState16 == LOW) {
      // and it's currently released:
    Keyboard.release(80);
    delay(50);
  }
  previousButtonState16 = buttonState16;
}