/*
  This program takes data from the Accelerometer on the Uno Wifi Rev2
  and uses the bluetooth shield to send constant accelerometer data to
  the Raspberry Pi.
 */
 
#include <Arduino_LSM6DS3.h>

void setup() {
  Serial.begin(9600);
  while (!Serial);

  if (!IMU.begin()) {
    Serial.println("Could not initialize the IMU");
    while (1);
  }
}

void loop() {
  float x, y, z; // Acceleration in G's

  if (IMU.accelerationAvailable()) {
    IMU.readAcceleration(x, y, z);
    // Convert to mG's
    x = x * 1000;
    y = y * 1000;
    z = z * 1000;
    Serial.print("X value is: ");
    Serial.print(x);
    Serial.print('\t');
    Serial.print("Y value is: ");
    Serial.print(y);
    Serial.print('\t');
    Serial.print("Z value is: ");
    Serial.print(z);
    Serial.print('\n');
  }
  else {
    Serial.println("Unable to read acceleration data");
  }

}
