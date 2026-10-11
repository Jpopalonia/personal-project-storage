void setup() {
  Serial.begin(9600);

  int int1 = 1;
  float float1 = 1;
  bool bool1 = false;
  char char1 = 'a';

  String str1 = "Hello ";
  String str2 = "World!";

  Serial.print(str1 + str2);
}

void loop() {
}