#include <stdio.h>

#include "ANC.h"
#include "connection.h"
#include "storage.h"
#include "flashes.h"
#include "sensors.h"

extern "C" {
    #include "settings.h"
}

void app_main() {
    // Доступ к глобальной переменной
    if (GlobalSettings.ancEnabled) {
        // Включить ANC
    }

    GlobalSettings.ancStrength = 90;
}
