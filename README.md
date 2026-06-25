# ESP32 LED & Passive Buzzer Test

## 📖 Deskripsi

Project sederhana untuk melakukan pengujian LED indikator dan Passive Buzzer menggunakan ESP32.

Program akan menjalankan urutan notifikasi berupa:

- LED menyala saat buzzer aktif.
- Buzzer memainkan 3 nada berbeda:
  - Tinggi
  - Sedang
  - Rendah
- Setelah urutan selesai, sistem menunggu beberapa detik lalu mengulang kembali.

Project ini cocok digunakan sebagai:

- Pengujian awal hardware ESP32
- Verifikasi wiring LED dan buzzer
- Dasar sistem notifikasi pada project IoT
- Dasar efek suara pada project board game berbasis ESP32

---

## 🎯 Fitur

- ✅ Kontrol LED menggunakan GPIO
- ✅ Kontrol Passive Buzzer menggunakan PWM
- ✅ Efek suara multi-tone
- ✅ Sinkronisasi LED dan Buzzer
- ✅ Kode sederhana dan mudah dikembangkan

---

## 🛠 Hardware yang Digunakan

| Komponen | Jumlah |
|-----------|---------|
| ESP32 DevKit V1 | 1 |
| Passive Buzzer | 1 |
| LED 5mm | 1 |
| Resistor 220Ω | 1 |
| Kabel Jumper | Secukupnya |

---

## 🔌 Wiring Diagram

### Passive Buzzer

| Passive Buzzer | ESP32 |
|---------------|-------|
| (+) | GPIO 26 |
| (-) | GND |

### LED Indicator

| LED | ESP32 |
|------|-------|
| Anode (+) | GPIO 25 |
| Cathode (-) | GND melalui resistor 220Ω |

---

## 📂 Struktur Program

```text
.
├── src
│   └── main.cpp
└── README.md
```

---

## 🚀 Cara Menjalankan

### 1. Buka Project di PlatformIO

Pastikan PlatformIO sudah terinstall pada Visual Studio Code.

### 2. Upload Program

Hubungkan ESP32 ke komputer kemudian jalankan:

```bash
PlatformIO: Upload
```

atau

```bash
pio run --target upload
```

### 3. Monitor Serial (Opsional)

```bash
pio device monitor
```

---

## 🎵 Pola Suara

Program akan menghasilkan urutan berikut:

```text
Nada Tinggi  (2000 Hz)
↓
Nada Sedang  (1200 Hz)
↓
Nada Rendah  (600 Hz)
↓
Tunggu 2 detik
↓
Ulangi
```

LED akan menyala setiap kali buzzer memainkan nada.

---

## ⚙️ Konfigurasi Pin

```cpp
#define BUZZER_PIN 26
#define LED_PIN    25
```

Jika diperlukan, pin dapat diubah sesuai kebutuhan hardware.

---

## 📋 Catatan

### Jika Buzzer Tidak Bunyi

Periksa:

- Wiring sudah benar
- Menggunakan Passive Buzzer
- GPIO tidak digunakan perangkat lain

### Jika Suara Terlalu Pelan

Kemungkinan:

- Frekuensi belum sesuai titik resonansi buzzer
- Tegangan 3.3V tidak cukup kuat
- Membutuhkan transistor driver untuk mendapatkan volume maksimal
- Buzzer dirancang untuk tegangan 5V

---

## 🔮 Pengembangan Selanjutnya

Contoh implementasi pada project yang lebih besar:

- NFC Scan Success
- NFC Scan Failed
- Player Join Notification
- Turn Indicator
- Game Start Sound
- Warning Alert
- Property Purchase Notification
- Jail Notification
- Victory Sound Effect

---

## 👨‍💻 Author

Pulung Bagas Setiawan

---

## 📄 License

Free to use, modify, and distribute for educational and personal projects.