
int sensorValue;

int sensorLow = 500;

int sensorHigh = 0;

const int ledPin = 13;

void setup(){

 
    
     pinMode(ledPin, OUTPUT);

     digitalWrite(ledPin, HIGH);

while (millis() < 5000) {

      sensorValue = analogRead(A0);

          if (sensorValue > sensorHigh) {

                    sensorHigh = sensorValue;

          }

          if (sensorValue < sensorLow) {

                    sensorLow = sensorValue;

          }

 }//Fin del bucle while.

     digitalWrite(ledPin, LOW);

 Serial.begin(9600);

} //Fin de la funcion setup.

void loop() {

 

        sensorValue = analogRead(A0);
        Serial.println(sensorValue);

int pitch = map(sensorValue, sensorLow, sensorHigh, 50, 4000);

     tone(8,pitch,20);

         delay(10);

 

}
