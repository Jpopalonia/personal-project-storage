const int A;
const int B;
const int C;

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, INPUT);
}

void loop() {
  //AND statement
  if (A && B) {
    digitalWrite(C, HIGH);
  } else {
    digitalWrite(C, LOW);
  }

  //OR statement
  if (A || B) {
    digitalWrite(C, HIGH);
  } else {
    digitalWrite(C, LOW);
  }

  //XOR statement
}
