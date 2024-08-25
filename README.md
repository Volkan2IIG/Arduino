# Tek Haneli 7 Segment Ekran Kurulumu

Bu proje, tek haneli 7 segmentli bir ekranın Arduino ile kurulumu, selamlama animasyonu ve 1'den 9'a kadar sayım yapılmasını içerir.

## Özellikler

- **Ekran Kurulumu**: 7 segmentli tek haneli bir ekranın pin bağlantılarının ve Arduino ile kontrolünün sağlanması.
- **Selamlama Animasyonu**: Ekran açıldığında, 1'den 9'a kadar hızlıca sayar ve ardından tüm segmentler iki kez yanıp söner.
- **Sayım**: Başlangıç selamlamasının ardından, ekran 1'den 9'a kadar sayım yapar.

## Kullanılan Bileşenler

- Arduino
- 7 Segmentli Tek Haneli Ekran
- Dirençler (470Ω veya 1kΩ)

## Bağlantı Şeması

| Pin Numarası | Segment | Arduino Bağlantısı |
|--------------|---------|--------------------|
| 1            | e       | 9                  |
| 2            | d       | 10                 |
| 3            | Com     | GND/Vcc            |
| 4            | c       | 8                  |
| 5            | DP      | 7                  |
| 6            | b       | 6                  |
| 7            | a       | 5                  |
| 8            | Com     | GND/Vcc            |
| 9            | f       | 4                  |
| 10           | g       | 3                  |

## Kullanım

Bu projeyi kullanmak için, Arduino IDE'sinde kodu yükleyin ve devreyi yukarıdaki bağlantı şemasına göre kurun. Ekran, açılışta selamlama animasyonunu gerçekleştirecek ve ardından 1'den 9'a kadar sayım yapacaktır.
