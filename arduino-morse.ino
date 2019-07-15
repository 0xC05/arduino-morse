/*
 * Morse Code by SYN (0xC05)
 * 
 * As I only had the built-in LED to work with, I thought using morse code as to test my Arduino out would be a great idea.
 * So here is this Sketch. Very basic, nothing special about it.
 * 
 * TO-DO:
 * Impliment a web app to generate morse code for Arduino.
 */

int morseled = 13; // The PIN where the LED is attached. (13 is built-in so using that).
int dittime = 200; // The amount of time you want your dit (-) to show on the LED.
int dahtime = 1000; // The amount of time you want your dah (_) to show on the LED.
int silencetime = 2000; // The amount of time you want the LED to be turned off after a letter.
int longsilencetime = 4000; // The amount of time you want the LED to be turned off after a word has been completed (/).

void setup() {
  pinMode(morseled, OUTPUT);
}

void dit(){ // function for dit
  digitalWrite(morseled, HIGH);
  delay(dittime);
  digitalWrite(morseled, LOW);
  delay(dittime);
}

void dah(){
  digitalWrite(morseled, HIGH);
  delay(dahtime);
  digitalWrite(morseled, LOW);
  delay(dittime);
}

void silence(){
  delay(silencetime);
}

void longsilence(){
  delay(longsilencetime);
}

void loop() {

  // Sample Morse Code for now is "Fuck you". Yeah... I am not kidding.
  
  dit();
  dit();
  dah();
  dit();
  silence();
  
  dit();
  dit();
  dah();
  silence();
  
  dah();
  dit();
  dah();
  dit();
  silence();
  
  dah();
  dit();
  dah();
  longsilence();

  dah();
  dit();
  dah();
  dah();
  silence();
  
  dah();
  dah();
  dah();
  silence();
  
  dit();
  dit();
  dah();
  longsilence();
}
