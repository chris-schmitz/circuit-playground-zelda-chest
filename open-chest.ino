#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>

#include "notes.h"

/********************************************************************
 * Musical Notes via https://www.arduino.cc/en/Tutorial/ToneMelody  *
 ********************************************************************/


#define CHEST 1
#define SECRET 2
// enum soundType {chest, secret}

unsigned int activeSound; // either secret or chest
unsigned int activeLightPattern; // either secret or chest


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println('Light with button');

  CircuitPlayground.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

  if (activeSound) {
    playZeldaSound(activeSound);
  }

  if (activeLightPattern) {
    toggleLights(true);
  }

  if( CircuitPlayground.leftButton()) {
    // playZeldaSound(CHEST);
    // toggleLights(true);
    activeSound = CHEST;
    activeLightPattern = CHEST;

  } else if (CircuitPlayground.rightButton()){
    activeSound = SECRET;
    activeLightPattern = SECRET;
    // playZeldaSound(SECRET);
    // toggleLights(true);

  } else {
    toggleLights(false);
  }
}

void toggleLights(bool state) {
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
  activeLightPattern = NULL;
}

void playZeldaSound(int type) {
  Serial.println("type:");
  Serial.println(type);
  int noteDuration = 1300;
  int wholeNote = noteDuration;
  int quarterNote = noteDuration / 4;
  int eighthNote = noteDuration / 8;

  if (activeSound == SECRET){
    CircuitPlayground.playTone(NOTE_G5, eighthNote);
    CircuitPlayground.playTone(NOTE_FS5, eighthNote);
    CircuitPlayground.playTone(NOTE_DS5, eighthNote);
    CircuitPlayground.playTone(NOTE_A4, eighthNote);
    CircuitPlayground.playTone(NOTE_GS4, eighthNote);
    CircuitPlayground.playTone(NOTE_E5, eighthNote);
    CircuitPlayground.playTone(NOTE_GS5, eighthNote);
    CircuitPlayground.playTone(NOTE_C6, eighthNote);
    return;
  }

  if (activeSound == CHEST){
    CircuitPlayground.playTone(NOTE_A5, quarterNote);
    CircuitPlayground.playTone(NOTE_AS5, quarterNote);
    CircuitPlayground.playTone(NOTE_B5, quarterNote);
    CircuitPlayground.playTone(NOTE_C6, wholeNote);
    return;
  }

  activeLightPattern = activeSound;
  activeSound = NULL;
}
