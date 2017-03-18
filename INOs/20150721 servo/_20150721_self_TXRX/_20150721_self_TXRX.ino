
// set this to the hardware serial port you wish to use
#define HWSERIAL Serial1

void setup() {
  Serial.begin(115200);
        HWSERIAL.begin(115200);
}

void loop() {
        int incomingByte;
     HWSERIAL.println("#31P1000T1000")  ;
  if (HWSERIAL.available() > 0) {
    incomingByte = HWSERIAL.read();
    Serial.print("UART received: ");
    Serial.println(incomingByte, DEC);
               
  }
  delay(1000);
}

