#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_ADDR 0x3C   // try 0x3D if nothing appears
#define MIDI_CHANNEL 1
#define POT_PIN 14
#define CC_NUMBER 1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

int lastSent = -1;

void setup() {
  Serial.begin(9600);
  Wire.begin();   // Teensy 4.1 default: SDA=18, SCL=19
  analogReadResolution(10);

  if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR)) {
    Serial.println("OLED not found - check wiring and address");
    while (true);   // halt so the error is obvious
  }

  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.display();   // nothing shows until this is called
}

void loop() {
  int raw = analogRead(POT_PIN);
  int midi = map(raw, 0, 1023, 0, 127);
  if (midi!= lastSent) {
    usbMIDI.sendControlChange(CC_NUMBER, midi, MIDI_CHANNEL);
    lastSent = midi;

    display.clearDisplay();

    display.setTextSize(1);
    display.setCursor(0, 0);
    display.print("Sending to CC ");
    display.print(CC_NUMBER);

    display.setTextSize(1.5);
    display.setCursor(0, 42);
    display.print("scaled to cc: ");
    display.print(midi);

    display.display();

    Serial.print(raw);
    Serial.print(" -> ");
    Serial.println(midi);
  }
  while (usbMIDI.read()) {}
  delay(5);
}
