int ledCount = 14;
int inxedLed[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13};

void setup() {
    for (int i = 0; i < ledCount; i++) {
        pinMode(i, OUTPUT);
    }
}

void loop() {
    for (int i = 0; i < ledCount; i++) {
        flowingLed(i);
    }
    for (int i = ledCount - 1; i > 0; i--) {
        flowingLed(i);
    }
}

void flowingLed(int change) {
    for(int i = 0; i < ledCount; i++) {
        if (change == i) {
            digitalWrite(i, HIGH);
        } else {
            digitalWrite(i, LOW);
        }
    }
    // if (change % 3 == 0) {
    //     digitalWrite(LED_BUILTIN, HIGH); 
    // } else {
    //     digitalWrite(LED_BUILTIN, LOW); 
    // }
    delay(50);
}