#include <WiFi.h>
#include <time.h>

const char* ssid = "YOUR_SSID";
const char* password = "YOUR_PASSWORD";

void setup() {
  Serial.begin(115200);
  
  // Connect to WiFi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  
  // Configure NTP
  configTime(3600, 0, "pool.ntp.org"); // GMT+1
  struct tm timeinfo;
  
  // Get and print current time
  if (getLocalTime(&timeinfo)) {
    Serial.printf("Date: %02d/%02d/%d Time: %02d:%02d\n",
      timeinfo.tm_mday, timeinfo.tm_mon+1, timeinfo.tm_year+1900,
      timeinfo.tm_hour, timeinfo.tm_min);
  }
}

void loop() {
  delay(10000); // Print time every 10 seconds
  struct tm timeinfo;
  if (getLocalTime(&timeinfo)) {
    Serial.printf("[Current Time] %02d:%02d:%02d\n",
      timeinfo.tm_hour, timeinfo.tm_min, timeinfo.tm_sec);
  }
}