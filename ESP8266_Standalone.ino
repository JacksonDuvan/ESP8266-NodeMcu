#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "f7f9ae187e554f739bf19ebdec214409"; //Auth Token de la app Blynk

char ssid[] = "ARRIS-2692"; //Nombre del router 
char pass[] = "contraseña"; //Contraseña del WiFi 

void setup()
{
 
  Serial.begin(9600);//Comunicacion serial 

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}

