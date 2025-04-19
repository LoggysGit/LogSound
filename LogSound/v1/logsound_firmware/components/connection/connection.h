#pragma once

#include <stdint.h>

typedef enum {
    DEVICE_UNKNOWN,
    DEVICE_PHONE,
    DEVICE_PC,
    DEVICE_TV,
} ConnectedDeviceType;

typedef struct {
    bool connected;
    ConnectedDeviceType deviceType;
    bool playing;
} ConnectionStatus;

extern ConnectionStatus connectionStatus;

void initBluetoothConnection();
void pauseAudio();
void resumeAudio();
