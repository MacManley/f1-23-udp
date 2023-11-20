//File: lapTelemetryBetterSerialPlotter.ino

/* NOTE: BetterSerialPlotter is recommended for this program, as it is more versatile then the built in Serial Plotter as of 2.2.1, allowing to save to CSV, allow multiple plotters and more...
Get it here: https://github.com/nathandunk/BetterSerialPlotter */

//#include "Wifi.h" // ESP32 WiFi include
#include <ESP8266WiFi.h> // ESP8266 WiFi include
#include <WiFiUdp.h>
#include <F1_23_UDP.h>

const char *SSID = "Your WiFi SSID";
const char *Password = "Enter your WiFi Password";

void startWiFi();
 
//The IP address that this ESP32 / ESP8266 has requested to be assigned to.
IPAddress ip();
WiFiUDP Udp;

unsigned int localPort = 20777; // Port that is used in game, default is 20777

F1_23_Parser* parser;

void setup() 
{ 
  parser = new F1_23_Parser();
  Serial.begin(115200);
  startWiFi();
  Udp.begin(localPort);
}

void loop()
{
  int packetSize = Udp.parsePacket(); 
  
    if(packetSize) 
    {
      float t = millis()/1000;
       char packetBuffer[packetSize];
       while(Udp.available())
       {
        Udp.read(packetBuffer, packetSize);
       }
       parser->push(packetBuffer);

      unsigned int playerCar = parser->packetCarTelemetryData()->m_playerCarIndex(); // Get the index of the players car in the array.
      float throttle = parser->packetCarTelemetryData()->m_carTelemetryData(playerCar).m_throttle * 100; // Throttle Input
      float brake = parser->packetCarTelemetryData()->m_carTelemetryData(playerCar).m_brake * 100; // Brake Input
      float steering = parser->packetCarTelemetryData()->m_carTelemetryData(playerCar).m_steer * 100; // Steering Input
      Serial.print(t);
      Serial.print("\t");
      Serial.print(throttle);
      Serial.print("\t");
      Serial.print(brake);
      Serial.print("\t");
      Serial.println(steering);
  }
}
void startWiFi()
{
 
  WiFi.mode(WIFI_STA);
  WiFi.begin(SSID, Password);
  Serial.print("Attempting to connect to "); 
  Serial.println(SSID);
 
  uint8_t i = 0;
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print('.');
    delay(250);
 
    if ((++i % 16) == 0)
    {
      Serial.println(F(" still trying to connect"));
    }
  }
 
  Serial.print(F("Connection Successful | IP Address: "));
  Serial.println(WiFi.localIP());
}