#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2);  // Set the LCD I2C address and dimensions

const int triggerPin = 12;
const int echoPin = 13;

void setup() {
  Serial.begin(115200);
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.init();                      // Initialize the LCD
  lcd.backlight();                 // Turn on the backlight
}

void loop() {
  // Measure distance using the HC-SR04 sensor
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  float distance = duration * 0.034 / 2;

  // Print distance on the LCD
  lcd.clear();   // Clear the LCD display
  lcd.setCursor(0, 0);   // Set the cursor to the first line
  lcd.print("Distance: ");
  lcd.print(distance);
  lcd.print(" cm");

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(1000);  // Update the reading every second
}
