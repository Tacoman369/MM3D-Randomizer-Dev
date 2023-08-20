#include "custom_messages.hpp"
#include "debug.hpp"

#include <set>

namespace CustomMessages {

class UnformattedMessageComp {
  public:
    bool operator()(const UnformattedMessage& lhs, const UnformattedMessage& rhs) const {
        return lhs.id < rhs.id;
    }
};

// Pack data less than 8 bits long into a char array without wasting bits
void packData(u8 size, u8 idx, char* data, u8 unpacked) {
  for (u8 i = size; i--;) {
    if (unpacked & 1)
      data[(idx * size + i) / 8] |= 0x80 >> ((idx * size + i) % 8);
    else
      data[(idx * size + i) / 8] &= ~(0x80 >> ((idx * size + i) % 8));
    unpacked >>= 1;
  }
}

std::set<UnformattedMessage, UnformattedMessageComp> messageEntries;
std::vector<UnformattedMessage> arrangedMessageEntries;

void CreateMessage(u16 textId, u16 field_2, u32 field_4, u32 flags, const char* NAEnglishText,
                   const std::vector<colType>& cols, const std::vector<iconType>& icons, const std::vector<u16>& delays,
                   u16 sfx, bool instant, bool repeatSfx) {
#ifdef ENABLE_DEBUG
    static std::vector<u16> usedTextIds;
    if (messageEntries.empty()) {
        usedTextIds.clear();
    }
    if (std::find(usedTextIds.begin(), usedTextIds.end(), textId) != usedTextIds.end()) {
        //CitraPrint("Multiple custom messages use text id " + std::to_string(textId));
        //printf("\x1b[31m\x1b[9;10H!!Text ID error!!         \x1b[37m");
    } else {
        usedTextIds.push_back(textId);
    }
#endif
    UnformattedMessage newEntry;

    newEntry.id = textId;
    newEntry.field_2 = field_2;
    newEntry.field_4 = field_4;
    newEntry.flags = flags;
    std::strcpy(newEntry.text, NAEnglishText);
    for (u16 idx = 0; idx < std::min(8, (int)cols.size()); idx++)
        packData(4, idx, newEntry.cols, cols.at(idx));
    for (u16 idx = 0; idx < std::min(8, (int)icons.size()); idx++)
        packData(6, idx, newEntry.icons, icons.at(idx));
    for (u16 idx = 0; idx < std::min(8, (int)delays.size()); idx++)
        packData(6, idx, newEntry.delays, delays.at(idx));
    newEntry.sfxAndFlags = ((instant) ? 0x8000 : 0x0000) | ((repeatSfx) ? 0x4000 : 0x0000) | sfx;

    messageEntries.insert(newEntry);
}

u32 NumMessages() {
    return messageEntries.size();
}

std::pair<const char*, u32> RawMessageData() {
    arrangedMessageEntries.assign(messageEntries.begin(), messageEntries.end());
    const char* data = (const char*)arrangedMessageEntries.data();
    u32 size         = arrangedMessageEntries.size() * sizeof(UnformattedMessage);
    return { data, size };
}

}
