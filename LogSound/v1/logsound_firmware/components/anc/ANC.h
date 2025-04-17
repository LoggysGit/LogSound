#pragma once
#include "SoundBatches.h"

void init_anc();
SoundBatch process_data_unit(SoundBatch* outer, SoundBatch* inner, SoundBatch* interim);