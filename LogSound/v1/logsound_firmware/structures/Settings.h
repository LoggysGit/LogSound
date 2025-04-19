#pragma once

typedef struct {
    // Общие пользовательские настройки
    int volume;                      // Громкость
    bool ancEnabled;                 // Активное шумоподавление включено
    bool transparencyMode;           // Режим прозрачности

    bool autoSwitchInput;            // Автопереключение между Jack/Bluetooth
    bool monoModeWhenOneCupOff;      // Моно-режим при снятии одной чаши

    // Аудио-настройки
    int8_t ancSpectre;               // Спектр шумоподавления (Отрицательно - Transparency, 0 - Off, Положительно - ANC)
    int8_t bassBoost;                // Бас: от -10 до +10
    int8_t trebleBoost;              // Высокие: от -10 до +10

    // Подсветка
    bool ledEnabled;                 // Включена ли подсветка
    bool isVariableBrightness        // Включен ли режим фотоподстраивания (РПФ)
    uint8_t ledBrightness;           // Яркость (0–255)
    int8_t ledVarBrightness;         // Аддитивная яркость при РФП (от -128 до 128)
    uint8_t flashMode;               // Режимы подсветки

    // Датчики и поведение
    bool autoPauseOnRemove;          // Авто-пауза при снятии наушников
    bool gestureControlEnabled;      // Включено ли управление жестами
    bool isMixStereoOnHalfRemove;    // Будут ли сливаться каналы при снятии чаши
    bool isDownVolInBowl;            // Будет ли уменьшаться громкость при полуснятии чаши

    // Пользователь
    char profileName[16];            // Название профиля пользователя
} Settings;
