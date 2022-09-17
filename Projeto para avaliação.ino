// C++ code
//
void setup()
{
  pinMode(12, INPUT);
  Serial.begin(9600);
  pinMode(A1, INPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  Serial.println(digitalRead(12));
  Serial.println(analogRead(A1));
  if (digitalRead(12) == 1 && analogRead(A1) > 500) {
    digitalWrite(2, HIGH);
    delay(10000); // Wait for 10000 millisecond(s)
    digitalWrite(2, LOW);
  }
}