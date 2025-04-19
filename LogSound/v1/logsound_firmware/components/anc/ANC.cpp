#include "ANC.h"
#include <stdio.h>

#include "ANC.h"
#include <algorithm>

void init_anc() {
    // инициализация переменных, буферов, возможно, фильтров
}

SoundBatch* preprocess(SoundBatch* sounds) {
    for (float& s : sounds->samples) {
        s = std::clamp(s, -1.0f, 1.0f); // нормализация
    }
    return sounds;
}

SoundBatch coreAnc(SoundBatch* outer, SoundBatch* inner, SoundBatch* interim) {
    SoundBatch result;
    result.samples.resize(outer->samples.size());

    for (size_t i = 0; i < outer->samples.size(); ++i) {
        float noise = outer->samples[i];
        float signal = inner->samples[i];
        float mid = interim ? interim->samples[i] : 0.0f;

        result.samples[i] = signal - (noise + mid) * 0.5f;
    }

    result.timestamp = inner->timestamp;
    return result;
}

SoundBatch postprocess(SoundBatch processed) {
    for (float& s : processed.samples) {
        // например, лимитируем
        s = std::clamp(s, -1.0f, 1.0f);
    }
    return processed;
}

SoundBatch anc(SoundBatch input) {

}
