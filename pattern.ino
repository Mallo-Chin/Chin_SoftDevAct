int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    String receivedData = Serial.readStringUntil('\n');

    if (receivedData == "pattern1") {
      pattern1();
    } else if (receivedData == "pattern2") {
      pattern2();
    } else if (receivedData == "pattern3") {
      pattern3();
    } else if (receivedData == "pattern4") {
      pattern4();
    } else if (receivedData == "pattern5") {
      pattern5();
    } else if (receivedData == "offAll") {
      offAll();
    }
  }
}

void pattern1() {
  offAll();
  digitalWrite(led1, HIGH); 
  delay(200);
  digitalWrite(led2, HIGH); 
  delay(200);
  digitalWrite(led3, HIGH); 
  delay(200);
  digitalWrite(led4, HIGH); 
  delay(200);
  digitalWrite(led5, HIGH);
}

void pattern2() {
  offAll();
  digitalWrite(led1, HIGH); 
  delay(150); 
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH); 
  delay(150); 
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH); 
  delay(150); 
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH); 
  delay(150); 
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH); 
  delay(150); 
  digitalWrite(led5, LOW);
}

void pattern3() {
  offAll();
  digitalWrite(led5, HIGH); 
  delay(150); 
  digitalWrite(led5, LOW);
  digitalWrite(led4, HIGH); 
  delay(150); 
  digitalWrite(led4, LOW);
  digitalWrite(led3, HIGH); 
  delay(150); 
  digitalWrite(led3, LOW);
  digitalWrite(led2, HIGH); 
  delay(150); 
  digitalWrite(led2, LOW);
  digitalWrite(led1, HIGH); 
  delay(150); 
  digitalWrite(led1, LOW);
}

void pattern4() {
  for (int x = 0; x < 5; x++) {
    digitalWrite(led1, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led1, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led5, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led4, LOW);
    delay(500);
  }
}

void pattern5() {
  for (int x = 0; x < 5; x++) {
    digitalWrite(led1, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led4, LOW);
    delay(300);
    digitalWrite(led1, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led4, HIGH);
    delay(300);
  }
}

void offAll() {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
}
