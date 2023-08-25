/*
* 2 SEMÁFOROS
*/
// Definimos los pines de salida para cada led
int Rojo1 = 23;
int Ambar1 = 22;
int Verde1 = 01;
int Rojo2 = 4;
int Ambar2 = 2;
int Verde2 = 15;
// Definimos los tiempos de espera
int tiempo1 = 5000;
int tiempo2 = 1000;
// Configuración de Arduino
void setup ()
{
pinMode(Rojo1,OUTPUT); // Configuramos las salidas de los leds
pinMode(Ambar1,OUTPUT);
pinMode(Verde1,OUTPUT);
pinMode(Rojo2,OUTPUT);
pinMode(Ambar2,OUTPUT);
pinMode(Verde2,OUTPUT);
}
// Programación
void loop ()
{
//Se enciende por 5 segundos el led rojo del semáforo 1 y el led verde del semáforo 2
digitalWrite(Rojo1,HIGH); 
digitalWrite(Ambar1,LOW);
digitalWrite(Verde1,LOW);
digitalWrite(Rojo2,LOW);
digitalWrite(Ambar2,LOW);
digitalWrite(Verde2,HIGH);
delay(tiempo1);

//El rojo del semáforo 1 se matiene y el semáforo 2 pasa a ámbar. Lo anterior dura 1 segundo
digitalWrite(Rojo1,HIGH);
digitalWrite(Ambar1,LOW);
digitalWrite(Verde1,LOW);
digitalWrite(Rojo2,LOW);
digitalWrite(Ambar2,HIGH);
digitalWrite(Verde2,LOW);
delay(tiempo2);

//El semáforo 1 pasa a verde y el semáforo 2 pasa a rojo. Lo anterior dura 5 segundos
digitalWrite(Rojo1,LOW);
digitalWrite(Ambar1,LOW);
digitalWrite(Verde1,HIGH);
digitalWrite(Rojo2,HIGH);
digitalWrite(Ambar2,LOW);
digitalWrite(Verde2,LOW);
delay(tiempo1);

//El rojo del semáforo 2 se matiene y el semáforo 1 pasa a ámbar. Lo anterior dura 1 segundo
digitalWrite(Rojo1,LOW);
digitalWrite(Ambar1,HIGH);
digitalWrite(Verde1,LOW);
digitalWrite(Rojo2,HIGH);
digitalWrite(Ambar2,LOW);
digitalWrite(Verde2,LOW);
delay(tiempo2);
}
