### Arduino sketches
I'm embarrassed at how simple both transmitting and receiving sketches are (literally just a coupel of lines) but here are they!

Note that the receiver uses the library "SoftwareSerial.h" which is now part of the Arduino family (or you can find it on GitHub).

### NOTE
I've left the following code in the Receive sketch (it was collapsed during the demo because I could not get it to work reliably) but you might have better luck:
```
void Setup() {

    <other stuff goes here>

    // The faster the baud rate, the less sensitive it becomes
    SOFTSerial.begin(9600);

    // Temporarily switch the baud rate to 115200 using AT command
    pinMode(SET, OUTPUT);
    digitalWrite(SET, LOW);
    delay(100);

    // Change wireless baud rate
    SOFTSerial.write("AT+DEFAULT");
    delay(250);
    while (SOFTSerial.available()) {
        Serial.write(SOFTSerial.read());
    }

    SOFTSerial.write("AT+RX");
    delay(250);
    while (SOFTSerial.available()) {
        Serial.write(SOFTSerial.read());
    }

    // Switch back to transparent transmission mode
    delay(100);
    digitalWrite(SET, HIGH);
}
```
