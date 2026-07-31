int relayPin = 7;
int buttonPin = 2;

int buttonState = HIGH;
int relayState = LOW;
int _buttonState = HIGH;
int lastChangeTime = 0;
int adcValue = 0;
bool lightWasLow = false;

void setup() {
    Serial.begin(9600);
    pinMode(buttonPin, INPUT);
    pinMode(relayPin, OUTPUT);
    digitalWrite(relayPin, relayState);
}

void loop() {
    int nowButtonState = digitalRead(buttonPin);
    if (nowButtonState != _buttonState) {
        lastChangeTime = millis();
    }

    if (millis() - lastChangeTime > 10) {
        if (buttonState != nowButtonState) {
            buttonState = nowButtonState;
            if (buttonState == LOW) {
                relayState = !relayState;
                digitalWrite(relayPin, relayState);
                Serial.println("Button is Pressed !");
            } else {
                Serial.println("Button is Released !");
            }
        }

        adcValue = analogRead(A0);

        if (adcValue < 150 && !lightWasLow) {
            relayState = !relayState;
            lightWasLow = true;
            digitalWrite(relayPin, relayState);
        } else if (adcValue > 150 && lightWasLow) {
            lightWasLow = false;
        }
    }


    _buttonState = nowButtonState;
}
