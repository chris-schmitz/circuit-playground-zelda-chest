#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>
#include "Chest.h"

#define SOUND_CHEST_OPEN 1
#define SOUND_SECRET 2

Chest chest;

void setup() {
  Serial.begin(9600);
  Serial.println('Light with button');

  CircuitPlayground.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

  if( CircuitPlayground.leftButton()) {
      chest.playZeldaSound(SOUND_CHEST_OPEN);
      chest.toggleLights(true);

  } else if (CircuitPlayground.rightButton()){
    chest.playZeldaSound(SOUND_SECRET);
    chest.toggleLights(true);

  } else {
    chest.toggleLights(false);
  }
}
