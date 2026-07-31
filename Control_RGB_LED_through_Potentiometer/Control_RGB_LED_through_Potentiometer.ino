int ledPinR = 9;
int ledPinG = 10;
int ledPinB = 11;

void setup() {
    Serial.begin(9600);
    pinMode(ledPinR, OUTPUT);
    pinMode(ledPinG, OUTPUT);
    pinMode(ledPinB, OUTPUT);
}

// void loop() {
//     int adcValue;
//     adcValue = analogRead(A0);
//     Serial.print("thermistor value: ");
//     Serial.println(adcValue);
//     adcValue = analogRead(A1);
//     analogWrite(ledPinR, map(adcValue, 0, 1024, 0, 255));
//     Serial.print("led Red: ");
//     Serial.println(adcValue);
//     adcValue = analogRead(A2);
//     analogWrite(ledPinG, map(adcValue, 0, 1024, 0, 255));
//     Serial.print("led Green: ");
//     Serial.println(adcValue);
//     adcValue = analogRead(A3);
//     analogWrite(ledPinB, map(adcValue, 0, 1024, 0, 255));
//     Serial.print("led Blue: ");
//     Serial.println(adcValue);
//     delay(500);
// }

void loop() {
    rgbLedDisplay(random(256), random(256), random(256));
    delay(500);
}

void rgbLedDisplay(int red, int green, int blue) {
    analogWrite(ledPinR, constrain(red, 0, 255));
    analogWrite(ledPinG, constrain(green, 0, 255));
    analogWrite(ledPinB, constrain(blue, 0, 255));
}