#include <ESP8266WiFi.h>
#include <WiFiClient.h>

const char* ssid = "";
const char* pass = "";

void startWiFi() {
  // Initialize WiFi connection
  WiFi.begin(ssid, pass); //connecting to the router
  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());
}
