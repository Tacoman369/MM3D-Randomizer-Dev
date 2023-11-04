#pragma once

#include "rnd/custom_messages.h"

#include <vector>

namespace CustomMessages {

void CreateMessage(u16 textId, u16 field_2, u32 field_4, u32 flags, const char* NAEnglishText,
                   const std::vector<colType>& cols, const std::vector<iconType>& icons, const std::vector<u16>& delays,
                   u16 sfx, bool instant, bool repeatSfx);

u32 NumMessages();

void CreateBaselineCustomMessages();

std::pair<const char*, u32> RawMessageData();

}
