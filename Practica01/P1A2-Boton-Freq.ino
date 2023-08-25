/*
  Boton-Freq
  El led es enciende al presionar el boton
  24 August 2023
  Luis Hernández, Carlos Suarez
*/
// constantes
#define boton 18        //boton
#define pinLED 15      //LED

// variables
int buttonState = LOW;         // estado del boton

void setup() {
  pinMode(pinLED, OUTPUT);
  pinMode(boton, INPUT);
}

void loop() {
  //revisa si el boton está siendo presionado:
  buttonState = digitalRead(boton);

  //Si el boton está siendo presionado, se entra al if y se enciende el pin del LED.
  if (buttonState == HIGH) {
    digitalWrite(pinLED, HIGH);
  //Si el boton no se está presionando, el LED se mantiene apagado.
  } else {
    digitalWrite(pinLED, LOW);
  }
}
