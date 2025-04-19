#include "connection.h"
#include "esp_log.h"

ConnectionStatus connectionStatus = {
    .connected = false,
    .deviceType = DEVICE_UNKNOWN,
    .playing = false,
};

void initBluetoothConnection() {
    // Инициализация BT, A2DP и т.д.
}

void pauseAudio() {
    // Тут команда на паузу
}

void resumeAudio() {
    // Тут команда на воспроизведение
}
