const int ledPin = 3;     // Arduino pin connected to LED

void setup() {
  pinMode(ledPin, OUTPUT);    // set Arduino pin for LED as an output
}

void loop() {
  analogWrite(ledPin, 0);     // set LED off
  delay(1000);                // wait 1 second
  analogWrite(ledPin, 31);    // increment LED brightness
  delay(1000);                // wait 1 second
  analogWrite(ledPin, 63);    // increment LED brightness
  delay(1000);                // wait 1 second
  analogWrite(ledPin, 95);    // increment LED brightness
  delay(1000);                // wait 1 second
  analogWrite(ledPin, 127);   // increment LED brightness
  delay(1000);                // wait 1 second
  analogWrite(ledPin, 159);   // increment LED brightness
  delay(1000);                // wait 1 second
  analogWrite(ledPin, 191);   // increment LED brightness
  delay(1000);                // wait 1 second
  analogWrite(ledPin, 223);   // increment LED brightness
  delay(1000);                // wait 1 second
  analogWrite(ledPin, 255);   // set LED to brightest
  delay(1000);                // wait 1 second
}
