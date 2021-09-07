#include <ESP8266WiFi.h>

void setup()
{
  Serial.begin(9600);

  delay(3000);
  Serial.println("Connecting to NodeMCU_Dyuti");
  WiFi.begin("NodeMCU_Dyuti","12345678");
  while ((!(WiFi.status() == WL_CONNECTED)))
  {
    delay(300);
    Serial.println("...");
  }
  Serial.println("Connected:");
  Serial.println((WiFi.localIP()));

}


void loop()
{

   

}
