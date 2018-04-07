const int trigPin = 9;    // Arduino pin connected to TRIG pin on sensor
const int echoPin = 10;   // Arduino pin connected to ECHO pin on sensor
const int ledPin = 3;     // Arduino pin connected to LED

long duration;            // Time value used to calculate distance
int distance;             // Distance in cm
int strength;             // distance


void setup() {
  pinMode(trigPin, OUTPUT);   // set Arduino pin for TRIG as an output
  pinMode(ledPin, OUTPUT);    // set Arduino pin for LED as an output
  pinMode(echoPin, INPUT);    // set Arduino pin for ECHO as an input
  Serial.begin(9600);
}


void loop() {

  // Sensor needs TRIG to be set to HIGH for 10ms in order to initiate
  // the distance sensing operation
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Reads in the time taken to send/receive the pulse
  duration = pulseIn(echoPin, HIGH);

  // Calculating the distance based on time and speed of sound
  distance= duration*0.034/2;

  Serial.print("Distance: ");
  Serial.println(distance);

  // truncates distance by 255 to be used as LED strength
  strength = min(distance, 255);

  // light LED
  analogWrite(ledPin, strength);
}
