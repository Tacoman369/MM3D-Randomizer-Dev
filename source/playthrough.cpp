#include "playthrough.hpp"

//#include "custom_messages.hpp"
#include "fill.hpp"
#include "location_access.hpp"
#include "logic.hpp"
#include "random.hpp"
#include "spoiler_log.hpp"
#include "rnd/item_override.h"
#include "custom_messages.hpp"

#include <3ds.h>
#include <unistd.h>

namespace Playthrough {

    int Playthrough_Init(u32 seed) {
      //initialize the RNG with just the seed incase any settings need to be
      //resolved to something random
      Random_Init(seed);

      overrides.clear();
      //CustomMessages::ClearMessages();
      ItemReset();
      HintReset();
      Areas::AccessReset();

      Settings::UpdateSettings();
      //once the settings have been finalized turn them into a string for hashing
      std::string settingsStr;
      for (Menu* menu : Settings::GetAllMenus()) {
        //don't go through non-menus
        if (menu->mode != OPTION_SUB_MENU) {
          continue;
        }

        for (size_t i = 0; i < menu->settingsList->size(); i++) {
          Option* setting = menu->settingsList->at(i);
          if (setting->IsCategory(OptionCategory::Setting)) {
            settingsStr += setting->GetSelectedOptionText();
          }
        }
      }
      unsigned int finalHash = std::hash<std::string>{}(Settings::seed + settingsStr);
      Random_Init(finalHash);

      Logic::UpdateHelpers();
      
      if (Settings::Logic.Is(rnd::LogicSetting::LOGIC_VANILLA)) {
        VanillaFill(); //Just place items in their vanilla locations
      }
      else if (Settings::Logic.Is(rnd::LogicSetting::LOGIC_GLITCHLESS) || Settings::Logic.Is(rnd::LogicSetting::LOGIC_GLITCHED)){ //Fill locations with logic
        int ret = Fill(); 
        if (ret < 0) {
            return ret;
        }
      }
      else if (Settings::Logic.Is(rnd::LogicSetting::LOGIC_NONE)){ 
        NoLogicFill(); //no logic fill
      }

      // Create custom messages for Tingle items if we shuffled.
      if (Settings::ShuffleTingleMaps.Is(true)) {
        // Logic: Get item names from location.
        // Create custom message for each tingle location (6)
        std::string clockTownMap = ItemTable(Location(TINGLE_N_CLOCK_TOWN_CT)->GetPlacedItemKey()).GetName().GetEnglish();
        std::string woodfallMap = ItemTable(Location(TINGLE_N_CLOCK_TOWN_WF)->GetPlacedItemKey()).GetName().GetEnglish();
        std::string snowHeadMap = ItemTable(Location(TINGLE_TWIN_ISLANDS_SH)->GetPlacedItemKey()).GetName().GetEnglish();
        std::string romaniMap = ItemTable(Location(TINGLE_TWIN_ISLANDS_RR)->GetPlacedItemKey()).GetName().GetEnglish();
        std::string greatBayMap = ItemTable(Location(TINGLE_GBC_GB)->GetPlacedItemKey()).GetName().GetEnglish();
        std::string stoneTowerMap = ItemTable(Location(TINGLE_GBC_ST)->GetPlacedItemKey()).GetName().GetEnglish();
        
        CustomMessages::CreateMessage(0x1D11, 0xFFFF, 0x3FF0A005, 0xFF1001,
        clockTownMap.insert(0, "#").append("#    #5 Rupees#&").append(woodfallMap.insert(0, "#").c_str()).append("#     #40 Rupees#").append("&#No thanks#").c_str(),
        {QM_GREEN, QM_RED, QM_GREEN, QM_RED, QM_GREEN}, {}, {}, 0x0, false, false);
        clockTownMap = ItemTable(Location(TINGLE_N_CLOCK_TOWN_CT)->GetPlacedItemKey()).GetName().GetEnglish();
        woodfallMap = ItemTable(Location(TINGLE_N_CLOCK_TOWN_WF)->GetPlacedItemKey()).GetName().GetEnglish();

        CustomMessages::CreateMessage(0x1D12, 0xFFFF, 0x3FF0A014, 0xFF1001,
        woodfallMap.insert(0, "#").append("#    #20 Rupees#&").append(snowHeadMap.insert(0, "#").c_str()).append("#     #40 Rupees#").append("&#No thanks#").c_str(),
        {QM_GREEN, QM_RED, QM_GREEN, QM_RED, QM_GREEN}, {}, {}, 0x0, false, false);
        woodfallMap = ItemTable(Location(TINGLE_N_CLOCK_TOWN_WF)->GetPlacedItemKey()).GetName().GetEnglish();
        snowHeadMap = ItemTable(Location(TINGLE_TWIN_ISLANDS_SH)->GetPlacedItemKey()).GetName().GetEnglish();

        CustomMessages::CreateMessage(0x1D13, 0xFFFF, 0x3FF0A014, 0xFF1001,
        snowHeadMap.insert(0, "#").append("#    #20 Rupees#&").append(romaniMap.insert(0, "#").c_str()).append("#     #40 Rupees#").append("&#No thanks#").c_str(),
        {QM_GREEN, QM_RED, QM_GREEN, QM_RED, QM_GREEN}, {}, {}, 0x0, false, false);
        snowHeadMap = ItemTable(Location(TINGLE_TWIN_ISLANDS_SH)->GetPlacedItemKey()).GetName().GetEnglish();
        romaniMap = ItemTable(Location(TINGLE_TWIN_ISLANDS_RR)->GetPlacedItemKey()).GetName().GetEnglish();

        CustomMessages::CreateMessage(0x1D14, 0xFFFF, 0x3FF0A014, 0xFF1001,
        romaniMap.insert(0, "#").append("#    #20 Rupees#&").append(greatBayMap.insert(0, "#").c_str()).append("#     #40 Rupees#").append("&#No thanks#").c_str(),
        {QM_GREEN, QM_RED, QM_GREEN, QM_RED, QM_GREEN}, {}, {}, 0x0, false, false);
        romaniMap = ItemTable(Location(TINGLE_TWIN_ISLANDS_RR)->GetPlacedItemKey()).GetName().GetEnglish();
        greatBayMap = ItemTable(Location(TINGLE_GBC_GB)->GetPlacedItemKey()).GetName().GetEnglish();

        CustomMessages::CreateMessage(0x1D15, 0xFFFF, 0x3FF0A014, 0xFF1001,
        greatBayMap.insert(0, "#").append("#    #20 Rupees#&").append(stoneTowerMap.insert(0, "#").c_str()).append("#     #40 Rupees#").append("&#No thanks#").c_str(),
        {QM_GREEN, QM_RED, QM_GREEN, QM_RED, QM_GREEN}, {}, {}, 0x0, false, false);
        greatBayMap = ItemTable(Location(TINGLE_GBC_GB)->GetPlacedItemKey()).GetName().GetEnglish();
        stoneTowerMap = ItemTable(Location(TINGLE_GBC_ST)->GetPlacedItemKey()).GetName().GetEnglish();

        CustomMessages::CreateMessage(0x1D16, 0xFFFF, 0x3FF0A014, 0xFF1001,
        stoneTowerMap.insert(0, "#").append("#    #20 Rupees#&").append(clockTownMap.insert(0, "#").c_str()).append("#     #40 Rupees#").append("&#No thanks#").c_str(),
        {QM_GREEN, QM_RED, QM_GREEN, QM_RED, QM_GREEN}, {}, {}, 0x0, false, false);
      }

      GenerateHash();

      if (Settings::GenerateSpoilerLog) {
        //write logs
        printf("\x1b[12;10HWriting Spoiler Log...");
        if (SpoilerLog_Write()) {
          printf("Done");
        } else {
          printf("Failed");
        }
        #ifdef ENABLE_DEBUG
          printf("\x1b[12;10HWriting Placement Log...");
          if (PlacementLog_Write()) {
            printf("Done\n");
          } else {
            printf("Failed\n");
          }
        #endif
        PlacementLog_Clear();
      }

      playthroughLocations.clear();
      wothLocations.clear();
      playthroughBeatable = false;

      return 1;
    }

    //used for generating a lot of seeds at once
    int Playthrough_Repeat(int count /*= 1*/) {
      printf("\x1b[0;0HGENERATING %d SEEDS", count);
      u32 repeatedSeed = 0;
      for (int i = 0; i < count; i++) {
        repeatedSeed = rand() % 0xFFFFFFFF;
        Settings::seed = std::to_string(repeatedSeed);
        CitraPrint("testing seed: " + Settings::seed);
        Playthrough_Init(std::hash<std::string>{}(Settings::seed));
        PlacementLog_Clear();
        printf("\x1b[15;15HSeeds Generated: %d\n", i + 1);
      }

      return 1;
    }
}
