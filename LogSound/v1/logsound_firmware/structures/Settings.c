#include "Settings.h"

// Определение глобальной переменной
Settings GlobalSettings = {
    .ancEnabled = true,
    .transparencyMode = false,
    .autoSwitchInput = true,
    .monoModeWhenOneCupOff = true,
    .ancStrength = 75,
    .transparencyLevel = 50,
    .bassBoost = 0,
    .trebleBoost = 0,
    .ledEnabled = true,
    .ledBrightness = 128,
    .ledColor = 0x00FFAA,
    .displayEnabled = true,
    .displayTimeout = 15,
    .autoPauseOnRemove = true,
    .gestureControlEnabled = true,
    .profileName = "User"
};
