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
  // A: All fingers fully bent (ASL 'A')
if (b < 70 && c < 70 && d < 70 && e < 70) {
  Serial.println("A");
}

// B: All fingers straight (ASL 'B')
else if (b > 200 && c > 200 && d > 200 && e > 200) {
  Serial.println("B");
}

// C: All fingers half-bent (90°) (ASL 'C')
else if (b < 150 && c < 150 && d < 150 && e < 150) {
  Serial.println("C");
}

// D: Index straight, others fully bent (ASL 'D')
else if (b > 200 && c < 70 && d < 70 && e < 70) {
  Serial.println("D");
}

// E: Index fully bent, others straight (ASL 'E')
else if (b < 70 && c > 200 && d > 200 && e > 200) {
  Serial.println("E");
}

// F: Index & Middle fully bent, others straight (ASL 'F')
else if (b < 70 && c < 70 && d > 200 && e > 200) {
  Serial.println("F");
}

// G: Index & Little fully bent, others straight (ASL 'G')
else if (b < 70 && c > 200 && d > 200 && e < 70) {
  Serial.println("G");
}

// H: Middle & Ring fully bent, others straight (ASL 'H')
else if (b > 200 && c < 70 && d < 70 && e > 200) {
  Serial.println("H");
}

// I: Little straight, others fully bent (ASL 'I')
else if (b < 70 && c < 70 && d < 70 && e > 200) {
  Serial.println("I");
}

// J: Little fully bent, others straight (ASL 'J')
else if (b > 200 && c > 200 && d > 200 && e < 70) {
  Serial.println("J");
}

// K: Index & Ring fully bent, others straight (ASL 'K')
else if (b < 70 && c > 200 && d < 70 && e > 200) {
  Serial.println("K");
}

// L: Index half-bent, others straight (ASL 'L')
else if (b < 150 && c > 200 && d > 200 && e > 200) {
  Serial.println("L");
}

// M: Ring & Little half-bent, others straight
else if (b > 200 && c > 200 && d < 150 && e < 150) {
  Serial.println("M");
}

// N: Middle & Ring half-bent, others straight
else if (b > 200 && c < 150 && d < 150 && e > 200) {
  Serial.println("N");
}

// O: Index & Little half-bent, others straight
else if (b < 150 && c > 200 && d > 200 && e < 150) {
  Serial.println("O");
}

// P: Middle fully bent, others straight
else if (b > 200 && c < 70 && d > 200 && e > 200) {
  Serial.println("P");
}

// Q: Little half-bent, others straight
else if (b > 200 && c > 200 && d > 200 && e < 150) {
  Serial.println("Q");
}

// R: Index & Middle half-bent, others straight
else if (b < 150 && c < 150 && d > 200 && e > 200) {
  Serial.println("R");
}

// S: All fingers half-bent except Middle
else if (b < 150 && c > 200 && d < 150 && e < 150) {
  Serial.println("S");
}

// T: Middle fully bent, others half-bent
else if (b < 150 && c < 70 && d < 150 && e < 150) {
  Serial.println("T");
}

// U: Index & Middle straight, others fully bent (ASL 'U')
else if (b > 200 && c > 200 && d < 70 && e < 70) {
  Serial.println("U");
}

// V: Index & Middle straight, others half-bent (ASL 'V')
else if (b > 200 && c > 200 && d < 150 && e < 150) {
  Serial.println("V");
}

// W: Index straight, others half-bent
else if (b > 200 && c < 150 && d < 150 && e < 150) {
  Serial.println("W");
}

// X: All fingers half-bent
else if (b < 150 && c < 150 && d < 150 && e < 150) {
  Serial.println("X");
}

// Y: Middle & Little straight, others half-bent (ASL 'Y')
else if (b < 150 && c > 200 && d < 150 && e > 200) {
  Serial.println("Y");
}

// Z: Ring straight, others half-bent
else if (b < 150 && c < 150 && d > 200 && e < 150) {
  Serial.println("Z");
}
  delay(1000); // Small delay to avoid spamming serial monitor
}
