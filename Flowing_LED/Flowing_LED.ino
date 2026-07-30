const int ledCount = 14;

int ledPins[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13};

void setup() {
    for (int i = 0; i < ledCount; i++) {
        pinMode(ledPins[i], OUTPUT);
    }
}

void loop() {
    for (int i = 0; i < ledCount; i++) {
        barGraphDisplay(i);
    }

    for (int i = ledCount - 1; i >= 0; i--) {
        barGraphDisplay(i);
    }
}

void barGraphDisplay(int ledOn) {
    for (int i = 0; i< ledCount; i++) {
        if (i == ledOn) {
            digitalWrite(ledPins[i], HIGH);
        }
        else {
            digitalWrite(ledPins[i], LOW);
        }
    }
    delay(100);
}