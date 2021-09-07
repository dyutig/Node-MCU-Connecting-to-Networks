#include <ESP8266WiFi.h>

void setup()
{
  Serial.begin(9600);
  delay(3000);
  WiFi.disconnect();
  Serial.println("START");
   WiFi.begin("dyuti","9831105173");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(300);
    Serial.print("....");

  }
  Serial.println("I AM CONNECTED to wifi network!");

}


void loop()
{


}
