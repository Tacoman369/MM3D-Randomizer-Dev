#pragma once

#include "keys.hpp"
#include "location_access.hpp"
#include "debug.hpp"
#include "spoiler_log.hpp"

#include <string>
#include <list>

//#include "../code/src/entrance.h" //defines entrance index values for overrides

//extern std::list<EntranceOverride> entranceOverrides; //entrance overrides list

enum class EntranceType {
    None,
    Dungeon,
    Interior,
    SpecialInterior,
    Grotto,
    Grave,
    Overworld,
    Spawn,
    WarpSong,
    Extra,
    All,
    OwlDrop,//No Owl Drops could prob be deleted
};

class Entrance {
public:

    Entrance(AreaKey connectedRegion_, std::vector<ConditionFn> conditions_met_)
    : connectedRegion(connectedRegion_) {
        conditions_met.resize(2);
        for (size_t i=0; i<conditions_met_.size(); i++){
            conditions_met[i] = conditions_met_[i];
        }
    }

    bool GetConditionsMet() const { 
        if (Settings::Logic.Is(LogicSetting::LOGIC_NONE) || Settings::Logic.Is(LogicSetting::LOGIC_VANILLA)) {
            return true;
        } else if (Settings::Logic.Is(LogicSetting::LOGIC_GLITCHLESS)) {
            return conditions_met[0]();
        } else if (Settings::Logic.Is(LogicSetting::LOGIC_GLITCHED)){
            if(conditions_met[0]()){
                return true;
            } else if (conditions_met[1] !=NULL){
                return conditions_met[1]();
            }
        }
        return false;
    }

    std::string to_string() const {
        return AreaTable(parentRegion)->regionName + " -> " + AreaTable(connectedRegion)->regionName;
    }

    void SetName() {
        name = AreaTable(parentRegion)->regionName + " -> " + AreaTable(connectedRegion)->regionName;
    }

    std::string GetName() const {
        return name;
    }

    bool ConditionsMet() const {

        Area* parent = AreaTable(parentRegion);
        int conditionsMet = 0;
        //PlacementLog_Msg("\nConditions Met parent = ");
        //PlacementLog_Msg(parent->regionName+"\n"); 
        if (!parent->AllAccess()){
            return false;
        }
        conditionsMet = (parent->HasAccess());
        Logic::UpdateHelpers();
        return conditionsMet;
    }

    AreaKey GetAreaKey() const {
        return connectedRegion;
    }
    
 //Yes this is the exact same function as above, trust me on this
    AreaKey GetConnectedRegionKey() const {
        return connectedRegion;
    }

    Area* GetConnectedRegion() const {
        return AreaTable(connectedRegion);
    }

    void SetParentRegion(AreaKey newParent) {
        parentRegion = newParent;
    }

    AreaKey GetParentRegionKey() const {
        return parentRegion;
    }

    Area* GetParentRegion() const {
        return AreaTable(parentRegion);
    }

    void SetNewEntrance(AreaKey newRegion) {
        connectedRegion = newRegion;
    }

    void SetAsShuffled() {
        shuffled = true;
    }

    bool IsShuffled() const {
        return shuffled;
    }

    bool IsAddedToPool() const {
        return addedToPool;
    }

    void AddToPool() {
        addedToPool = true;
    }

    void RemoveFromPool() {
        addedToPool = false;
    }

    void SetAsPrimary() {
        primary = true;
    }

    bool IsPrimary() const {
        return primary;
    }

    s16 GetIndex() const {
        return index;
    }

    void SetIndex(s16 newIndex) {
        index = newIndex;
    }

    s16 GetBlueWarp() const {
        return blueWarp;
    }

    void SetBlueWarp(s16 newBlueWarp) {
        blueWarp = newBlueWarp;
    }

    Entrance* GetAssumed() const {
        return assumed;
    }

    void SetReplacement(Entrance* newReplacement) {
        replacement = newReplacement;
    }

    Entrance* GetReplacement() const {
        return replacement;
    }

    EntranceType GetType() const {
        return type;
    }

    void SetType(EntranceType newType) {
        type = newType;
    }

    Entrance* GetReverse() const {
        return reverse;
    }

    void Connect(AreaKey newConnectedRegion) {
        connectedRegion = newConnectedRegion;
    }

    AreaKey Disconnect() {
        AreaKey previouslyConnected = connectedRegion;
        connectedRegion = NONE;
        return previouslyConnected;
    }

    void BindTwoWay(Entrance* otherEntrance) {
        reverse = otherEntrance;
        otherEntrance->reverse = this;
    }

    Entrance* GetNewTarget() {
        AreaTable(ROOT)->AddExit(ROOT, connectedRegion, []{return true;});
        Entrance* targetEntrance = AreaTable(ROOT)->GetExit(connectedRegion);
        targetEntrance->SetReplacement(this);
        return targetEntrance;
    }

    Entrance* AssumeReachable() {
        if (assumed == nullptr) {
            assumed = GetNewTarget();
            Disconnect();
        }
        return assumed;
    }

private:
    AreaKey parentRegion;
    AreaKey connectedRegion;
    std::vector<ConditionFn> conditions_met;

    //Entrance Randomizer stuff
    EntranceType type = EntranceType::None;
    Entrance* target = nullptr;
    Entrance* reverse = nullptr;
    Entrance* assumed = nullptr;
    Entrance* replacement = nullptr;
    s16 index = 0xFFFF;
    s16 blueWarp = 0;
    bool shuffled = false;
    bool primary = false;
    bool addedToPool = false;
    std::string name = "";
};

void ShuffleAllEntrances();
void CreateEntranceOverrides();

extern std::vector<std::list<Entrance*>> playthroughEntrances;
extern bool noRandomEntrances;
