#include <WiFi.h>
#include <DHT.h>

// WiFi
const char* ssid = "YOUR_WIFI";
const char* password = "YOUR_PASSWORD";

// Pins
#define SOIL_PIN 34
#define LDR_PIN 35
#define RELAY_PIN 25
#define DHT_PIN 4
#define DHT_TYPE DHT11

DHT dht(DHT_PIN, DHT_TYPE);

// Thresholds
int soilThreshold = 2000;
int lightThreshold = 2000;

void setup() {
  Serial.begin(115200);

  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, HIGH); // pump OFF

  dht.begin();

  // WiFi
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nConnected to WiFi");
}

void loop() {

  // Read sensors
  int soil = analogRead(SOIL_PIN);
  int light = analogRead(LDR_PIN);
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  Serial.println("------ SENSOR DATA ------");
  Serial.print("Soil: "); Serial.println(soil);
  Serial.print("Light: "); Serial.println(light);
  Serial.print("Temp: "); Serial.println(temp);
  Serial.print("Humidity: "); Serial.println(hum);

  // Irrigation logic
  if (soil < soilThreshold) {
    digitalWrite(RELAY_PIN, LOW); // pump ON
    Serial.println("Irrigation ON");
  } else {
    digitalWrite(RELAY_PIN, HIGH); // pump OFF
    Serial.println("Irrigation OFF");
  }

  // Simple light check
  if (light < lightThreshold) {
    Serial.println("Low sunlight condition");
  }

  delay(3000);
}