// Pin Definitions (as per your table)
#define TRIG_PIN 9    // Ultrasonic Trigger
#define ECHO_PIN 10   // Ultrasonic Echo

#define IN1 5         // L298N IN1
#define IN2 6         // L298N IN2
#define IN3 7         // L298N IN3
#define IN4 8         // L298N IN4

// Optional: Motor speed (0-255)
#define MOTOR_SPEED 180

// Function to measure distance using HC-SR04
long getDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH, 20000); // Timeout after 20ms
  long distance = duration * 0.034 / 2; // Convert to cm
  return distance;
}

// Motor Control Functions
void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void turnRight() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);   // Left motor backward
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);    // Right motor forward
  delay(400);                // Adjust turn duration as needed
  stopMotors();
  delay(200);                // Small pause after turn
}

void setup() {
  // Motor pins
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Ultrasonic sensor pins
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  // Optional: Serial for debugging
  Serial.begin(9600);
}

void loop() {
  long distance = getDistance();
  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance > 0 && distance < 15) { // 0 check avoids sensor error
    stopMotors();
    turnRight();
  } else {
    moveForward();
  }

  delay(50); // Small delay for stability
}
