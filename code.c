# hovercraft
 basic example code for a hovercraft using Arduino and motor control modules.
// Define lift motor pins
#define LIFT_MOTOR_PIN1 2
#define LIFT_MOTOR_PIN2 3

// Define thrust motor pins
#define THRUST_MOTOR_PIN1 4
#define THRUST_MOTOR_PIN2 5

// Define motor speeds
#define MAX_LIFT_SPEED 255
#define MAX_THRUST_SPEED 255

void setup() {
  // Set lift motor pins as output
  pinMode(LIFT_MOTOR_PIN1, OUTPUT);
  pinMode(LIFT_MOTOR_PIN2, OUTPUT);
  
  // Set thrust motor pins as output
  pinMode(THRUST_MOTOR_PIN1, OUTPUT);
  pinMode(THRUST_MOTOR_PIN2, OUTPUT);
}

void loop() {
  // Example: hovercraft moves forward with lift and thrust motors on full speed
  moveForward(MAX_LIFT_SPEED, MAX_THRUST_SPEED);
}

void moveForward(int liftSpeed, int thrustSpeed) {
  // Set lift motor to lift
  analogWrite(LIFT_MOTOR_PIN1, liftSpeed);
  analogWrite(LIFT_MOTOR_PIN2, 0);

  // Set thrust motor to move forward
  analogWrite(THRUST_MOTOR_PIN1, thrustSpeed);
  analogWrite(THRUST_MOTOR_PIN2, 0);
}
