#include <Arduino.h>
#include <SoftwareSerial.h>

// HC12 pin definitions
#define SS_TX 7
#define SS_RX 6
#define SET 9

// Use above pin setup for Bit-Bashing Serial
SoftwareSerial SOFTSerial(SS_RX, SS_TX);

void setup()
{
    delay(2000);
    Serial.begin(115200);
    Serial.println("Setup started");

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

void loop()
{
    // Transfer all output from the hardware serial to the HC12 Software Serial
    while (SOFTSerial.available()) {
        Serial.write(SOFTSerial.read());
    }
}