int btnPin = 2;
int ledPin = 13;
boolean isLighting = false;

void setup() {
    pinMode(btnPin, INPUT);
    pinMode(ledPin, OUTPUT);
}

void loop() {
    if (digitalRead(btnPin) == HIGH) {
        delay(100);
        if (digitalRead(btnPin) == HIGH) {
            reverseLed();
            while (digitalRead(btnPin) == HIGH)
            delay(100);
        }
    }
}

void reverseLed() {
    if (isLighting) {
        digitalWrite(ledPin, LOW);
        isLighting = false;
    } else {
        digitalWrite(ledPin, HIGH);
        isLighting = true;
    }
}
