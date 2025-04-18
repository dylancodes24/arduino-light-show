void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT); //Red LED
  pinMode(5, OUTPUT); //Yellow LED
  pinMode(6, OUTPUT); //Green LED
  pinMode(9, OUTPUT); //White LED
  pinMode(10, OUTPUT); //Blue LED
}

void loop() {
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  delay(100);
  digitalWrite(9, HIGH);
  digitalWrite(6, LOW);
  delay(100);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(5, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(6, LOW);
  delay(1000);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  delay(1000);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  delay(1000);
  digitalWrite(3, HIGH);
  delay(1000);

  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  delay(1000);

  digitalWrite(10, HIGH);
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(6, HIGH);
  delay(500);

  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  delay(1000);

  digitalWrite(10, HIGH);
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(9, HIGH);
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(6, HIGH);
  delay(4000);

  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  delay(10000);
  //End of Show!
}