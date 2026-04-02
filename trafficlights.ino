// Traffic light pins
int redLED = 8;
int yellowLED = 9;
int greenLED = 10;

void setup() {
  // Set pins as OUTPUT
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // RED ON
  digitalWrite(redLED, HIGH);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, LOW);
  delay(5000); // Red for 5 seconds

  // RED + YELLOW ON (prepare to go)
  digitalWrite(yellowLED, HIGH);
  delay(2000); // Yellow + Red for 2 seconds

  // GREEN ON
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, HIGH);
  delay(5000); // Green for 5 seconds

  // YELLOW ON (prepare to stop)
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, HIGH);
  delay(2000); // Yellow for 2 seconds
}