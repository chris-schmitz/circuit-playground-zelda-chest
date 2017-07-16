#include "Chest.h"

#define SOUND_CHEST_OPEN 1
#define SOUND_SECRET 2

Chest::Chest() {}

void Chest::toggleLights(bool state) {
  if(state) {
      int pauseDuration = 100;
      for (int i = 0; i <= 9 ; i++){
        CircuitPlayground.setPixelColor(i, 255, 255, 255);
      }

      CircuitPlayground.setPixelColor(0, 255, 0, 0);
      delay(pauseDuration);
      CircuitPlayground.setPixelColor(0, 255, 255, 255);
      CircuitPlayground.setPixelColor(1, 255, 0, 0);
      delay(pauseDuration);
      CircuitPlayground.setPixelColor(1, 255, 255, 255);
      CircuitPlayground.setPixelColor(2, 255, 0, 0);
      delay(pauseDuration);
      CircuitPlayground.setPixelColor(2, 255, 255, 255);
      CircuitPlayground.setPixelColor(3, 255, 0, 0);
      delay(pauseDuration);
      CircuitPlayground.setPixelColor(3, 255, 255, 255);
      CircuitPlayground.setPixelColor(4, 255, 0, 0);
      delay(pauseDuration);
      CircuitPlayground.setPixelColor(4, 255, 255, 255);
      CircuitPlayground.setPixelColor(5, 255, 0, 0);
      delay(pauseDuration);
      CircuitPlayground.setPixelColor(5, 255, 255, 255);
      CircuitPlayground.setPixelColor(6, 255, 0, 0);
      delay(pauseDuration);
      CircuitPlayground.setPixelColor(6, 255, 255, 255);
      CircuitPlayground.setPixelColor(7, 255, 0, 0);
      delay(pauseDuration);
      CircuitPlayground.setPixelColor(7, 255, 255, 255);
      CircuitPlayground.setPixelColor(8, 255, 0, 0);
      delay(pauseDuration);
      CircuitPlayground.setPixelColor(8, 255, 255, 255);
      CircuitPlayground.setPixelColor(9, 255, 0, 0);
      delay(pauseDuration);
      CircuitPlayground.setPixelColor(9, 255, 255, 255);
      CircuitPlayground.setPixelColor(0, 255, 0, 0);
      delay(pauseDuration);
      CircuitPlayground.setPixelColor(0, 255, 255, 255);
      CircuitPlayground.setPixelColor(1, 255, 0, 0);
      delay(pauseDuration);
      CircuitPlayground.setPixelColor(1, 255, 255, 255);
      CircuitPlayground.setPixelColor(2, 255, 0, 0);
      delay(pauseDuration);
      CircuitPlayground.setPixelColor(2, 255, 255, 255);
      CircuitPlayground.setPixelColor(3, 255, 0, 0);
      delay(pauseDuration);
      CircuitPlayground.setPixelColor(3, 255, 255, 255);
      CircuitPlayground.setPixelColor(4, 255, 0, 0);
      delay(pauseDuration);
      CircuitPlayground.setPixelColor(4, 255, 255, 255);
      CircuitPlayground.setPixelColor(5, 255, 0, 0);
      delay(pauseDuration);
      CircuitPlayground.setPixelColor(5, 255, 255, 255);
      CircuitPlayground.setPixelColor(6, 255, 0, 0);
      delay(pauseDuration);
      CircuitPlayground.setPixelColor(6, 255, 255, 255);
      CircuitPlayground.setPixelColor(7, 255, 0, 0);
      delay(pauseDuration);
      CircuitPlayground.setPixelColor(7, 255, 255, 255);
      CircuitPlayground.setPixelColor(8, 255, 0, 0);
      delay(pauseDuration);
      CircuitPlayground.setPixelColor(8, 255, 255, 255);
      CircuitPlayground.setPixelColor(9, 255, 0, 0);
      delay(pauseDuration);

  } else {
    CircuitPlayground.clearPixels();
  }
}

void Chest::playZeldaSound(int type) {

  if (type == SOUND_SECRET){
    CircuitPlayground.playTone(NOTE_G5, _eighthNote);
    CircuitPlayground.playTone(NOTE_FS5, _eighthNote);
    CircuitPlayground.playTone(NOTE_DS5, _eighthNote);
    CircuitPlayground.playTone(NOTE_A4, _eighthNote);
    CircuitPlayground.playTone(NOTE_GS4, _eighthNote);
    CircuitPlayground.playTone(NOTE_E5, _eighthNote);
    CircuitPlayground.playTone(NOTE_GS5, _eighthNote);
    CircuitPlayground.playTone(NOTE_C6, _eighthNote);
    return;
  }

  if (type == SOUND_CHEST_OPEN){
    CircuitPlayground.playTone(NOTE_A5, _quarterNote);
    CircuitPlayground.playTone(NOTE_AS5, _quarterNote);
    CircuitPlayground.playTone(NOTE_B5, _quarterNote);
    CircuitPlayground.playTone(NOTE_C6, _wholeNote);
    return;
  }

}
