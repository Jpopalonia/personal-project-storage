int pwmOut = 3;
int signalIn = 2;

int control = LED_BUILTIN;

void setup() {
  pinMode(pwmOut, OUTPUT);
  pinMode(signalIn, INPUT);

  pinMode(control, OUTPUT);
}

void loop() {
  if (digitalRead(signalIn) == HIGH) {
    for (int i = 0; i < 256; i++) {
      analogWrite(pwmOut, i);

      delay(4);
    }

    while (digitalRead(signalIn) == HIGH) {}
    delay(100);
  }

  if (digitalRead(signalIn) == LOW) {
    for (int i = 255; i >= 0; i -= 2) {
      analogWrite(pwmOut, i);

      delay(4);
    }

    analogWrite(pwmOut, 0);

    while (digitalRead(signalIn) == LOW) {}
  }
}