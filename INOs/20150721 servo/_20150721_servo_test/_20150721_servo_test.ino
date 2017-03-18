void setup() //initializing serial communication baud rate

{
   Serial2.begin(115200); //sets the baud rate at 115200 to match the one set on the SSC-32 board
}

void loop() 

{

  Serial2.println("#31P500T1000");//turns the servo to the initial position in 1 second

  delay(1000); //delay for 1 second

  Serial2.println("#31P1500T1000"); //turns the servo to the final position in 1 second

  delay(1000); //delay for 1 second

}
