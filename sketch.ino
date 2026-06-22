int startValue = 5;
int ledPin = 13;

// Function to blink LED a given number of times
void flashLED(int times) {
  int blinkCounter = 0;

  while (blinkCounter < times) {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
    blinkCounter = blinkCounter + 1;
  }
}

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("=== Smart Countdown Starting ===");

  int count = startValue;

  while (count > 0) {
    Serial.print("Count: ");
    Serial.println(count);

    flashLED(count);
    delay(1000);

    count = count - 1;
  }

  Serial.println("=== Countdown Complete ===");
}

void loop() {
}