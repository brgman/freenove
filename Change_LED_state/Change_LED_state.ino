int btnPin = 2;
int ledPin = 13;
boolean isLighting = false;

void setup() {
    pinMode(btnPin, INPUT);
    pinMode(ledPin, OUTPUT);
}

void loop() {
    if (digitalRead(btnPin) == LOW) {
        delay(1000);
        if (digitalRead(btnPin) == LOW) {
            reverseLed();
            while (digitalRead(btnPin) == LOW)
            delay(1000);
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