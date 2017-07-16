#include "DHT.h" //agregamos la libreria DHT del sensor de humedad y temperatura
#define DHTPIN 2 //definimos el pin de conexion del sensor DHT
#define DHTTYPE DHT22 //definimos el modelo del sensor
DHT dht (DHTPIN,DHTTYPE); //creamos una variable dht para el sensor de humedad y temperatura

void setup() {
  Serial.begin(9600); //inicializamos el monitor serial
  dht.begin(); //iniciamos el sensor
}

void loop(){
  float h = dht.readHumidity(); //leemos la humedad
  float t = dht.readTemperature(); //leemos de temperatura
  Serial.println ("Humedad: "); 
  Serial.println (h);
  Serial.println ("Temperatura: ");
  Serial.println (t);
  delay(2000);
}

