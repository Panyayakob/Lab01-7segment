int segmentPins[] = {16, 17, 18, 19, 21, 22, 23};


int numPatterns[] = {
  0b00111111,  // 0
  0b00000110,  // 1
  0b01011011,  // 2
  0b01001111,  // 3
  0b01100110,  // 4
  0b01101101,  // 5
  0b01111101,  // 6
  0b00000111,  // 7
  0b01111111,  // 8
  0b01101111   // 9
};

void setup() {
 
  for (int i = 0; i < 7; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
}

void loop() {
  
  for (int i = 0; i < 10; i++) {
    displayNumber(i);
    delay(1000);  
}

void displayNumber(int num) {
  
  for (int i = 0; i < 7; i++) {
    
    int bitStatus = (numPatterns[num] >> i) & 1;
    digitalWrite(segmentPins[i], bitStatus);
  }
}
