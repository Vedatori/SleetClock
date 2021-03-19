#include <Arduino.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <ESP8266WiFi.h>
#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <WiFiManager.h>         //https://github.com/tzapu/WiFiManager

#include <WiFiUDP.h>

unsigned int localPort = 12345;      // local port to listen for UDP packets
WiFiUDP Udp;
IPAddress remoteIP(192,168,0,19);

const int pinCidlaDS = 2;
OneWire oneWireDS(pinCidlaDS);
DallasTemperature dallasTemp(&oneWireDS);
float filteredTemp =  20.0;
float inputTemp = 0.0;

WiFiManager wifiManager;

void setup(void) {
    Serial.begin(115200);
    dallasTemp.begin();

    //wifi_set_sleep_type(LIGHT_SLEEP_T);

    //Udp.begin(localPort);
}

void loop(void) {
    wifiManager.autoConnect("ESP01_temp_sensor");
    Serial.println(WiFi.localIP());

    dallasTemp.requestTemperatures();
    inputTemp = dallasTemp.getTempCByIndex(0) - 3.7;
    if(inputTemp > 0 && inputTemp < 50)
        filteredTemp = /*0.9*filteredTemp + 0.1**/inputTemp;
    char buffer[50];
    sprintf (buffer, "%.2f", filteredTemp);

    Serial.println(buffer);

    //Udp.beginPacket(Udp.remoteIP(), Udp.remotePort());
    Udp.beginPacket(remoteIP, 56841);
    Udp.write(buffer);
    Udp.endPacket();
    delay(500);     //necessary for packet transmission before forceSleep
    WiFi.forceSleepBegin(); //Modem sleep, ca. 17 mA consumption
    delay(10000);
    WiFi.forceSleepWake();
}