// HCSR04Ultrasonic/examples/UltrasonicDemo/UltrasonicDemo.pde
#include <Ultrasonic.h>

#define TRIGGER_PIN  48
#define ECHO_PIN     49

Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  float cmMsec, inMsec;
  long microsec = ultrasonic.timing();

  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM); // 計算距離，單位: 公分
  inMsec = ultrasonic.convert(microsec, Ultrasonic::IN); // 計算距離，單位: 英吋
  Serial.print("MS: ");
  Serial.print(microsec);
  Serial.print(", CM: ");
  Serial.print(cmMsec);
  Serial.print(", IN: ");
  Serial.println(inMsec);
  delay(1000);
}
