#pragma once
#include "SoundBatches.h"

void init_anc();
SoundBatch* preprocess(SoundBatch* sounds);
SoundBatch coreAnc(SoundBatch* outer, SoundBatch* inner, SoundBatch* interim);
SoundBatch postprocess(SoundBatch processed);
