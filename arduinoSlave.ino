#include "serialCom.h"
#include "utils.h"


int soilMoistureSensorPin = A0;
char *soilMoistureReqParam = "SoilMoisture: ";

void setup() {
  Serial.begin(9600);
}

void loop() {
  int soilMoistureValueFromSensor = analogRead(soilMoistureSensorPin);

  char *soilMoistureValue = intToString(soilMoistureValueFromSensor);
  char *soilMoistureMessage = concat(2, soilMoistureReqParam, soilMoistureValue);
  serialPrint(soilMoistureMessage);
  free(soilMoistureMessage);
  free(soilMoistureValue);

  delay(1000);
}