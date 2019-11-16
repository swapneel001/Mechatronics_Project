// defines pins numbers
const int trigPin = 3;
const int echoPin = 2;
const int push = 0;
//counter variale
int c = 0;
int sensorState = 1, lastState = 0;
int score = 0;

#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

long duration;
int distance;
void setup() {
  Serial.begin(9600);
  analogWrite(6,50);
  lcd.begin(16, 2);
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  lcd.begin(16, 2);             // columns, rows.  use 16,2 for a 16x2 LCD, etc.
  lcd.clear();                  // start with a blank screen
  lcd.setCursor(0, 0);          // set cursor to column 0, row 0 (the first row)
  lcd.print(" S C O R E ");
  lcd.setCursor(0, 1);
  lcd.print("");// change text to whatever you like. keep it clean!
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
}
void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
  if (distance < 3)
  {
    score++;
    Serial.print("Score right now is:   ");
    Serial.println(score);
    lcd.setCursor(10, 0);
    lcd.print(score);
    delay(6000);
  }
  
  if (digitalRead(push) == LOW)
  {
    score = 0; //to reset score
    lcd.clear();                  // start with a blank screen
    lcd.setCursor(0, 0);          // set cursor to column 0, row 0 (the first row)
    lcd.print("Game Restart");
  }

}
