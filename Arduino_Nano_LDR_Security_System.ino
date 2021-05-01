/* 
 *  Author : Nasir Ali 
 *  Arduino NANO & LDR based Security System
*/




const int analogInPin = A0;  // Analog input pin that should be connected to LDR
int sensorValue=0;
void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(3, OUTPUT); // Connect Buzzer to Pin No 3
}

void loop() {
  // LDR read the analog in value:
  sensorValue = analogRead(analogInPin);
  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\n");
  // condition that if light threshold value is greater than 400 out of 1023 the buzzer should beep
  if(sensorValue < 400 ){
    digitalWrite(3, HIGH);
  }
  else {
    digitalWrite(3, LOW);
  }
  delay(2);
}
