int a = 0; // Thumb
int b = 0; // Index
int c = 0; // Middle
int d = 0; // Ring
int e = 0; // Little

void setup() {
  Serial.begin(9600); // Start serial communication
  Serial.println("Hello");

  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
}

void loop() {
  // Read flex sensor values
  a = analogRead(A0); // Thumb
  b = analogRead(A1); // Index
  c = analogRead(A2); // Middle
  d = analogRead(A3); // Ring
  e = analogRead(A4); // Little

  Serial.print("Thumb: "); Serial.print(a);
  Serial.print(" Index: "); Serial.print(b);
  Serial.print(" Middle: "); Serial.print(c);
  Serial.print(" Ring: "); Serial.print(d);
  Serial.print(" Little: "); Serial.println(e);

  // Gesture recognition for letters A-Z
  if (b < 70 && c < 70 && d < 70 && e < 70) {
    Serial.println("A");
  } 
  else if (b > 200 && c > 200 && d > 200 && e > 200) {
    Serial.println("B");
  } 
  else if (b < 150 && c < 150 && d < 150 && e < 150) {
    Serial.println("C");
  } 
  else if (b > 200 && c < 70 && d < 70 && e < 70) {
    Serial.println("D");
  } 
  else if (b < 70 && c > 200 && d > 200 && e > 200) {
    Serial.println("E");
  } 
  else if (b < 70 && c > 200 && d > 200 && e > 200) {
    Serial.println("F");
  }  
  else if (b < 70 && c > 200 && d > 200 && e < 70) {
    Serial.println("G");
  } 
  else if (b > 200 && c > 200 && d < 70 && e < 70) {
    Serial.println("H");
  } 
  else if (b < 70 && c < 70 && d < 70 && e > 200) {
    Serial.println("I");
  } 
  else if (b > 200 && c > 200 && d > 200 && e < 70) {
    Serial.println("J");
  } 
  else if (b > 200 && c < 70 && d > 200 && e > 200) {
    Serial.println("K");
  } 
  else if (b < 150 && c > 200 && d > 200 && e > 200) {
    Serial.println("L");
  } 
  else if (b < 150 && c > 200 && d > 200 && e < 200) {
    Serial.println("M");
  } 
  else if (b < 150 && c > 200 && d < 200 && e < 200) {
    Serial.println("N");
  } 
  else if (b > 200 && c < 150 && d < 150 && e > 200) {
    Serial.println("O");
  } 
  else if (b < 150 && c > 200 && d > 200 && e < 150) {
    Serial.println("P");
  } 
  else if (b < 150 && c > 200 && d < 200 && e < 150) {
    Serial.println("Q");
  } 
  else if (b < 100 && c < 200 && d > 200 && e > 200) {
    Serial.println("R");
  } 
  else if (b < 200 && c > 200 && d > 200 && e > 200) {
    Serial.println("S");
  } 
  else if (b < 100 && c > 200 && d < 200 && e < 200) {
    Serial.println("T");
  } 
  else if (b > 200 && c < 70 && d > 200 && e < 200) {
    Serial.println("U");
  } 
  else if (b > 200 && c < 70 && d < 200 && e < 200) {
    Serial.println("V");
  } 
  else if (b < 200 && c < 70 && d < 200 && e < 200) {
    Serial.println("W");
  } 
  else if (b > 200 && c > 200 && d < 200 && e < 200) {
    Serial.println("X");
  } 
  else if (b > 150 && c > 200 && d < 200 && e > 200) {
    Serial.println("Y");
  } 
  else if (b > 200 && c > 200 && d < 200 && e < 200) {
    Serial.println("Z");
  } 

  delay(1000); // Small delay to avoid spamming serial monitor
}
