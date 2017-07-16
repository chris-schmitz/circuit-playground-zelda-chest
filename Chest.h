#ifndef CHEST_H
#define CHEST_H

#include <Adafruit_CircuitPlayground.h>
#include "notes.h"

class Chest {

  public:
    Chest();
    // methods
    void toggleLights(bool state);
    void playZeldaSound(int type);

  private:
    int _noteDuration = 1300;
    int _wholeNote = _noteDuration;
    int _quarterNote = _noteDuration / 4;
    int _eighthNote = _noteDuration / 8;
};

#endif