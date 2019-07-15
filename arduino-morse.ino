/*
 * Morse Code by SYN (0xC05)
 * 
 * As I only had the built-in LED to work with, I thought using morse code as to test my Arduino out would be a great idea.
 * So here is this Sketch. Very basic, nothing special about it.
 * 
 * TO-DO:
 * Impliment a web app to generate morse code for Arduino.
 */

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void dit(){ // function for dit
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
}

void dah(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
}

void silence(){
  delay(1000);
}

void longsilence(){
  delay(2000);
}

void loop() {
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
