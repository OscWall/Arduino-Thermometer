const int tempSensor = A0;


void setup() {
  Serial.begin(9600);


}



void loop() {
  int sensorValue = analogRead tempSensor);

  
  float voltage = sensorValue * (5.0 / 1023.0);
  float temperaturCelcius = voltage * 100.0;

  Serial.print("Temperature: ");
  Serial.print(temperaturCelsius);



  Serial.println(" C°");

  delay(1000); 
}