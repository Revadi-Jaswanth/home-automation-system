/*
 Task 2: Home Automation (ESP8266 + Blynk)
 Controls two relays (lights/fan) via Blynk virtual pins V1 and V2.
*/
#define BLYNK_TEMPLATE_ID "YourTemplateID"
#define BLYNK_AUTH_TOKEN  "YourAuthToken"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char ssid[] = "YourSSID";
char pass[] = "YourPassword";

const int RELAY1 = D1;  // Light
const int RELAY2 = D2;  // Fan

void setup() {
  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

BLYNK_WRITE(V1) { digitalWrite(RELAY1, param.asInt()); } // V1 → Light
BLYNK_WRITE(V2) { digitalWrite(RELAY2, param.asInt()); } // V2 → Fan

void loop() {
  Blynk.run();
}
