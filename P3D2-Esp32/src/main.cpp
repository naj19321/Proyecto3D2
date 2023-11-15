// ****************************************************************************
//Jamiel Najera Morales, 19321
// Proyecto03 - Electronica Digital 2
// ****************************************************************************
// Librerias
// ****************************************************************************
#include <Arduino.h>
#include <Temperature_LM75_Derived.h>
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif
// ****************************************************************************
// Variables Globales
// ****************************************************************************
Generic_LM75 temperature;
#define PIN 23
#define NUMPIXELS 16 // Popular NeoPixel ring size
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
#define DELAYVAL 500 // Time (in milliseconds) to pause between pixels
char temp [10];
// ****************************************************************************
// Prototipos de Funcion
// ****************************************************************************

// ****************************************************************************
// ISR vectores de interrupciones
// ****************************************************************************
// ****************************************************************************
// Funcion setup (inicial)
// ****************************************************************************
void setup(){
Wire.begin(); //Unirse al Bus I2C como master
Serial.begin(115200); // Iniciar Serial con la CPU
Serial.println("Se realizó la comunicació Serial 0");
//Serial1.begin(115200);
Serial2.begin(115200); //Iniciar Serial con la Tiva C
Serial.println("Se realizó la comunicación Serial 2");

pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)

}
// ****************************************************************************
// Loop principal
// ****************************************************************************
void loop(){

pixels.clear(); // Set all pixel colors to 'off'

Serial.print("Temperature = ");
Serial.print(temperature.readTemperatureC());
Serial2.print(temperature.readTemperatureC());
Serial.println(" C");

Serial2.readBytesUntil('\n', temp, sizeof(temp) - 1);
//String data = Serial2.readString();
int numRec = atoi(temp);

//int numRec = temperature.readTemperatureC();

if (numRec == 1) {

  pixels.setPixelColor(0, pixels.Color(0, 150, 0));
  pixels.setPixelColor(1, pixels.Color(0, 150, 0));
  pixels.setPixelColor(2, pixels.Color(0, 150, 0));
  pixels.setPixelColor(3, pixels.Color(0, 150, 0));
  pixels.setPixelColor(4, pixels.Color(0, 150, 0));
  pixels.setPixelColor(5, pixels.Color(0, 150, 0));
  pixels.setPixelColor(6, pixels.Color(0, 150, 0));
  pixels.setPixelColor(7, pixels.Color(0, 150, 0));
  pixels.setPixelColor(8, pixels.Color(0, 150, 0));
  pixels.setPixelColor(9, pixels.Color(0, 150, 0));
  pixels.setPixelColor(10, pixels.Color(0, 150, 0));
  pixels.setPixelColor(11, pixels.Color(0, 150, 0));
  pixels.setPixelColor(12, pixels.Color(0, 150, 0));
  pixels.setPixelColor(13, pixels.Color(0, 150, 0));
  pixels.setPixelColor(14, pixels.Color(0, 150, 0));
  pixels.setPixelColor(15, pixels.Color(0, 150, 0));

  
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(DELAYVAL); // Pause before next pass through loop
}

if (numRec == 2) {

  pixels.setPixelColor(0, pixels.Color(0, 0, 150));
  pixels.setPixelColor(1, pixels.Color(0, 0, 150));
  pixels.setPixelColor(2, pixels.Color(0, 0, 150));
  pixels.setPixelColor(3, pixels.Color(0, 0, 150));
  pixels.setPixelColor(4, pixels.Color(0, 0, 150));
  pixels.setPixelColor(5, pixels.Color(0, 0, 150));
  pixels.setPixelColor(6, pixels.Color(0, 0, 150));
  pixels.setPixelColor(7, pixels.Color(0, 0, 150));
  pixels.setPixelColor(8, pixels.Color(0, 0, 150));
  pixels.setPixelColor(9, pixels.Color(0, 0, 150));
  pixels.setPixelColor(10, pixels.Color(0, 0, 150));
  pixels.setPixelColor(11, pixels.Color(0, 0, 150));
  pixels.setPixelColor(12, pixels.Color(0, 0, 150));
  pixels.setPixelColor(13, pixels.Color(0, 0, 150));
  pixels.setPixelColor(14, pixels.Color(0, 0, 150));
  pixels.setPixelColor(15, pixels.Color(0, 0, 150));

  
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(DELAYVAL); // Pause before next pass through loop
}

if (numRec == 3) {
  pixels.setPixelColor(0, pixels.Color(150, 0, 0));
  pixels.setPixelColor(1, pixels.Color(150, 0, 0));
  pixels.setPixelColor(2, pixels.Color(150, 0, 0));
  pixels.setPixelColor(3, pixels.Color(150, 0, 0));
  pixels.setPixelColor(4, pixels.Color(150, 0, 0));
  pixels.setPixelColor(5, pixels.Color(150, 0, 0));
  pixels.setPixelColor(6, pixels.Color(150, 0, 0));
  pixels.setPixelColor(7, pixels.Color(150, 0, 0));
  pixels.setPixelColor(8, pixels.Color(150, 0, 0));
  pixels.setPixelColor(9, pixels.Color(150, 0, 0));
  pixels.setPixelColor(10, pixels.Color(150, 0, 0));
  pixels.setPixelColor(11, pixels.Color(150, 0, 0));
  pixels.setPixelColor(12, pixels.Color(150, 0, 0));
  pixels.setPixelColor(13, pixels.Color(150, 0, 0));
  pixels.setPixelColor(14, pixels.Color(150, 0, 0));
  pixels.setPixelColor(15, pixels.Color(150, 0, 0));

  
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(DELAYVAL); // Pause before next pass through loop
}



delay(1000);

}
