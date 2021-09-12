// front is connected to top board, back to bottom

// front-left (blue, purple, gray)
int motor1pin1 = 2;
int motor1pin2 = 3;
int pwmMotor1 = 5; 

// front-right (white, yellow, green)
int motor2pin1 = 7;
int motor2pin2 = 8;
int pwmMotor2 = 6;

// back-left
int motor3pin1 = 14;
int motor3pin2 = 15;
int pwmMotor3 = 9; 

// back-right
int motor4pin1 = 16;
int motor4pin2 = 17;
int pwmMotor4 = 10;

void setup() {
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
  pinMode(motor3pin1, OUTPUT);
  pinMode(motor3pin2, OUTPUT);
  pinMode(motor4pin1, OUTPUT);
  pinMode(motor4pin2, OUTPUT);

  pinMode(pwmMotor1, OUTPUT); 
  pinMode(pwmMotor2, OUTPUT);
  pinMode(pwmMotor3, OUTPUT); 
  pinMode(pwmMotor4, OUTPUT);
}

void loop() {
  //Controlling speed (0 = off and 255 = max speed):
  analogWrite(pwmMotor1, 250); //ENA pin
  analogWrite(pwmMotor2, 100); //ENB pin
  analogWrite(pwmMotor3, 150); //ENA pin
  analogWrite(pwmMotor4, 200); //ENB pin

  //Controlling spin direction of motors:
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);

  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);

  digitalWrite(motor3pin1, HIGH);
  digitalWrite(motor3pin2, LOW);

  digitalWrite(motor4pin1, HIGH);
  digitalWrite(motor4pin2, LOW);
  delay(1000);

  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);

  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);

  digitalWrite(motor3pin1, LOW);
  digitalWrite(motor3pin2, HIGH);

  digitalWrite(motor4pin1, LOW);
  digitalWrite(motor4pin2, HIGH);
  delay(1000);
}
