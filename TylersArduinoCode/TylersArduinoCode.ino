int redLed = 3;
// int greenLed = 
int PIRSensor = 5;
int buzzer = 4;
int armButton = 6;

bool armState = false;

void setup() {
  
  for(int i = 3; i <= 4; i++) {
    
    pinMode(i, OUTPUT);
  }

  for(int i = 5; i <= 6; i++) {
    
    pinMode(i, INPUT);
  }

  Serial.begin(9600);
}

void loop() {

  if(digitalRead(armButton) == HIGH) {

      armState = true;
  } else { armState = false; }
  
  if(armState == true) {

     int sensorVal = digitalRead(PIRSensor);

     if(sensorVal == HIGH) {

        digitalWrite(greenLed, LOW);
        digitalWrite(redLed, HIGH);
     }
  } else { digitalWrite(greenLed, HIGH); digitalWrite(redLed, LOW); }
}
