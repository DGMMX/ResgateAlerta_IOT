#include <WiFi.h>
#include <PubSubClient.h>
#include "DHTesp.h"

const char* ssid = "Wokwi-GUEST";
const char* password = "";
const char* mqttServer = "broker.hivemq.com";
int mqttPort = 1883;

WiFiClient espClient;
PubSubClient client(espClient);

const int DHT_PIN =14 ; 
const int LED_PIN = 15;  
DHTesp dht;

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  dht.setup(DHT_PIN, DHTesp::DHT22);
  pinMode(LED_PIN, OUTPUT);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi conectado");
  client.setServer(mqttServer, mqttPort);
}

void loop() {
  if (!client.connected()) {
    reconnect();
  }else{

  TempAndHumidity data = dht.getTempAndHumidity();

  if (isnan(data.temperature)) {
    Serial.println("Falha ao ler o sensor DHT22!");
  } else {
    Serial.print("Temp: ");
    Serial.print(data.temperature);
    Serial.print("°C - Hum: ");
    Serial.print(data.humidity);
    Serial.println("%");

    String payload = String(data.temperature);
    client.publish("fiap/led/temp", payload.c_str());

    digitalWrite(LED_PIN, data.temperature > 30 ? HIGH : LOW);
  }

  client.loop();
  delay(2000);
  }
}

void reconnect() {
  while (!client.connected()) {
    Serial.print("Tentando conectar ao MQTT...");
    if (client.connect("ESP32Client")) {
      Serial.println("conectado!");
    } else {
      Serial.print("falhou. rc=");
      Serial.print(client.state());
      delay(2000);
    }
  }
}


