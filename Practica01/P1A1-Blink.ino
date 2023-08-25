/*
  Blink
  Enciende el LED por un segundo, luego lo apaga por un segundo y se repite.
  24 August 2023
  Luis Hernández, Carlos Suarez
*/
#define LED 15
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED, HIGH);   //enciende el LED
  delay(1000);               //espera un segundo
  digitalWrite(LED, LOW);    //apaga el LED
  delay(1000);               //espera un segundo
}
