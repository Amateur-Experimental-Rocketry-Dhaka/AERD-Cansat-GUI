void setup() {
  // Initialize the serial communication
  Serial.begin(9600);

  // Seed the random number generator with a unique value
  randomSeed(analogRead(0));
}

void loop() {
  // Generate random data
  float latitude = random(-900000, 900000) / 10000.0;   // Latitude: -90.0000 to +90.0000
  float longitude = random(-1800000, 1800000) / 10000.0; // Longitude: -180.0000 to +180.0000
  float altitude = random(0, 30000) / 10.0;              // Altitude: 0.0 to 3000.0 meters
  int packetCount = random(1, 100);                     // Packet Count: 1 to 999
  float temperature = random(-4000, 5000) / 100.0;       // Temperature: -40.00 to +50.00 °C
  float humidity = random(0, 10000) / 100.0;             // Humidity: 0.00 to 100.00 %
  float pressure = random(90000, 110000) / 100.0;        // Pressure: 900.00 to 1100.00 hPa
  int aqi = random(0, 500);                              // AQI: 0 to 500
  int co2 = random(400, 5000);                           // CO2 Level: 400 to 5000 ppm
  float uvIndex = random(0, 1100) / 100.0;               // UV Index: 0.00 to 11.00
  float velocity = random(0, 3000) / 100.0;              // Velocity: 0.00 to 30.00 m/s

  // Print the generated values to the serial monitor, comma-separated
  Serial.print(latitude, 4);    // Print latitude with 4 decimal places
  Serial.print(",");
  Serial.print(longitude, 4);   // Print longitude with 4 decimal places
  Serial.print(",");
  Serial.print(altitude, 1);    // Print altitude with 1 decimal place
  Serial.print(",");
  Serial.print(packetCount);
  Serial.print(",");
  Serial.print(temperature, 2); // Print temperature with 2 decimal places
  Serial.print(",");
  Serial.print(humidity, 2);    // Print humidity with 2 decimal places
  Serial.print(",");
  Serial.print(pressure, 2);    // Print pressure with 2 decimal places
  Serial.print(",");
  Serial.print(aqi);
  Serial.print(",");
  Serial.print(co2);
  Serial.print(",");
  Serial.print(uvIndex, 2);     // Print UV index with 2 decimal places
  Serial.print(",");
  Serial.print(velocity, 2);    // Print velocity with 2 decimal places
  Serial.println();             // Print new line to separate data packets

  // Delay before generating next set of random values
  delay(1000); // 1 second delay
}
