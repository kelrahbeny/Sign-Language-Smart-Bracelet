const int flexSensor1 = A0; 
const int flexSensor2 = A1; 

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensor1Value = analogRead(flexSensor1);
  int sensor2Value = analogRead(flexSensor2);

  if (sensor1Value > 800 && sensor2Value > 800) {
    Serial.println("Hello");
  }
  else if (sensor1Value < 500 && sensor2Value > 800) {
    Serial.println("Yes");
  }
  else if (sensor1Value < 500 && sensor2Value < 500) {
    Serial.println("I need help");
  }

  delay(1000);
}
