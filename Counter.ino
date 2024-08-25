const int segmentPins[] = {6, 7, 8, 9, 10, 11, 4}; // a, b, c, d, e, f, g pinleri

// Hexadecimal segment kodları
const byte segmentCodes[] = {
  0xC0, // 0
  0xF9, // 1
  0xA4, // 2
  0xB0, // 3
  0x99, // 4
  0x92, // 5
  0x82, // 6
  0xF8, // 7
  0x80, // 8
  0x90  // 9
};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
  Serial.begin(9600);
  showGreeting(); // Selamlamayı göster
}

void loop() {
  // Hızlıca 1'den 9'a kadar sayma
  for (int number = 1; number <= 9; number++) {
    displayNumber(number);
    delay(500); // Her rakamı 500 ms göstermek
  }
}

void showGreeting() {
  // Tüm LED'leri söndür
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], LOW);
  }
  delay(900); // Ekran boş 900 ms kalsın

  // 1'den 9'a kadar hızlıca sayma
  for (int number = 1; number <= 9; number++) {
    displayNumber(number);
    delay(70); // Hızlı sayım
  }

  // Tüm LED'leri 2 kere yanıp söndürme
  for (int blink = 0; blink < 2; blink++) {
    for (int i = 0; i < 7; i++) {
      digitalWrite(segmentPins[i], HIGH); // Tüm LED'leri yak
    }
    delay(140); // 140 ms yanık kal
    for (int i = 0; i < 7; i++) {
      digitalWrite(segmentPins[i], LOW); // Tüm LED'leri söndür
    }
    delay(140); // 140 ms kapalı kal
  }
}

void displayNumber(int number) {
  // İlgili rakamın segment kodunu al
  byte code = segmentCodes[number];
  
  // Segmentleri güncelle
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], (code >> i) & 1); // Kodun ilgili bitini yaz
  }
}
