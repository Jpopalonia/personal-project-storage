#define button1 9
#define button2 8
#define LED1 11
#define LED2 10

void setup() {
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  digitalWrite(LED1, !digitalRead(button1));
  digitalWrite(LED2, !digitalRead(button2));
}