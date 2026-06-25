#include <Arduino.h>

#define BUZZER_PIN 26
#define LED_PIN    25

#define BUZZER_CHANNEL 0

void beep(int freq, int duration)
{
    digitalWrite(LED_PIN, HIGH);

    ledcWriteTone(BUZZER_CHANNEL, freq);
    delay(duration);

    ledcWriteTone(BUZZER_CHANNEL, 0);

    digitalWrite(LED_PIN, LOW);
    delay(100);
}

void setup()
{
    pinMode(LED_PIN, OUTPUT);

    ledcSetup(BUZZER_CHANNEL, 2000, 8);
    ledcAttachPin(BUZZER_PIN, BUZZER_CHANNEL);
}

void loop()
{
    beep(2000, 300); // tinggi
    beep(1200, 300); // sedang
    beep(600, 300);  // rendah

    delay(2000);
}