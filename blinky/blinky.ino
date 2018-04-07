const int ledPin = 3;     // Arduino pin connected to LED

void setup() {
  pinMode(ledPin, OUTPUT);    // set Arduino pin for LED as an output
}

void loop() {
  digitalWrite(ledPin, HIGH); // set LED voltage to HIGH
  delay(1000);                // wait 1 second
  digitalWrite(ledPin, LOW);  // set LED voltage to LOW
  delay(1000);                // wait 1 second
}
