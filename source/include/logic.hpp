#pragma once

#include <3ds.h>

#include "keys.hpp"

namespace Logic {

	extern bool noVariable;
	//item logic
	extern bool Ocarina;
	extern bool KokiriSword;
	extern bool HasBottle;
	extern bool Bombchus;
	extern bool DekuStick;
	extern bool MagicBean;
	extern bool MagicBeanPack;
	extern bool LensOfTruth;
	extern bool Bow;
	extern bool HerosBow;
	extern bool FireArrows;
	extern bool IceArrows;
	extern bool LightArrows;
	extern bool Hookshot;
	extern bool Pictobox;
	extern bool PowderKeg;
	extern bool Seahorse;
	extern bool DekuPrincess;
	extern bool BigPoe;
	extern u8 ZoraEgg;
	extern bool Mushroom;
	extern bool SpringWater;
	extern bool HotSpringWater;
	extern bool SpinAttack;
	extern bool Epona;
	extern bool WitchBottle;
	extern bool AlienBottle;
	extern bool GoronRaceBottle;
	extern bool BeaverRaceBottle;
	extern bool DampeBottle;
	extern bool ChateauBottle;
	extern bool BombersNotebook;
	extern bool MirrorShield;
	extern bool HerosShield;
	extern bool RazorSword;
	extern bool GildedSword;
	extern bool GretFairysMask;
	extern bool BombBag20;
	extern bool TownBombBag;
	extern bool MountainBombBag;
	extern bool TownArcheryQuiver;
	extern bool SwampArcheryQuiver;
	extern bool Townwallet200;
	extern bool OceanWallet500;
	extern bool MagicPower;
	extern bool ExtendedMagicPower;
	extern bool GreatFairySword;
	extern bool StoneTowerMagicBean;
	extern bool SwampScrubMagicBean;
	extern bool Epona;
	//mask logic
	extern bool DekuMask;
	extern bool GoronMask;
	extern bool ZoraMask;
	extern bool KeatonMask;
	extern bool BunnyHood;
	extern bool PostmansHat;
	extern bool AllNightMask;
	extern bool BlastMask;
	extern bool StoneMask;
	extern bool GreatFairyMask;
	extern bool BremenMask;
	extern bool DonGerosMask;
	extern bool MaskOfScents;
	extern bool RomanisMask;
	extern bool CircusLeadersMask;
	extern bool KafeisMask;
	extern bool CouplesMask;
	extern bool KamarosMask;
	extern bool GibdosMask;
	extern bool GarosMask;
	extern bool CaptainsHat;
	extern bool GiantsMask;
	extern bool FierceDietyMask;
	extern bool MaskOfTruth;
	extern bool OneMask;
	extern bool TwoMasks;
	extern bool ThreeMasks;
	extern bool FourMasks;
	extern bool AllMasks;
	//trade items logic
	extern bool LandTitle;
	extern bool SwampTitle;
	extern bool MountainTitle;
	extern bool OceanTitle;
	extern bool RoomKey;
	extern bool LetterKafei;
	extern bool PendantOfMemories;
	extern bool LetterMama;
	extern bool MoonsTear;
	//trade quest events
	extern bool LandTitleAccess;
	extern bool SwampTitleAccess;
	extern bool MountainTitleAccess;
	extern bool OceanTitleAccess;
	extern bool RoomKeyAccess;
	extern bool LetterKafeiAccess;
	extern bool PendantAccess;
	extern bool LetterMamaAccess;
	extern bool MoonsTearAccess;
	//Songs
	extern bool ScarecrowSong;
	extern bool SongOfStorms;
	extern bool SongOfHealing;
	extern bool SonataOfAwakening;
	extern bool GoronsLullaby;
	extern bool NewWaveBossaNova;
	extern bool ElegyOfEmptiness;
	extern bool OathToOrder;
	extern bool EponasSong;
	extern bool SongOfSoaring;
	//Remains
	extern bool OdolwaRemains;
	extern bool GohtRemains;
	extern bool GyorgRemains;
	extern bool TwinmoldRemains;
	//Dungeon Clears
	extern bool WoodfallClear;
	extern bool SnowheadClear;
	extern bool GreatBayClear;
	extern bool StoneTowerClear;
	//Progressive Items
	extern u8 ProgressiveBow;
	extern u8 ProgressiveMagic;
	extern u8 ProgressiveWallet;
	extern u8 ProgressiveBombBag;
	//Keys
	extern u8 WoodfallTempleKeys;
	extern u8 SnowheadTempleKeys;
	extern u8 GreatBayTempleKeys;
	extern u8 StoneTowerTempleKeys;
	//Boss Keys
	extern bool BossKeyWoodfallTemple;
	extern bool BossKeySnowheadTemple;
	extern bool BossKeyGreatBayTemple;
	extern bool BossKeyStoneTowerTemple;
	//Skulltula Counts
	extern u8 SwampSkulltulaTokens;
	extern u8 OceanSkulltulaTokens;
	//Stray Fairies
	extern u8 WoodfallStrayFairies;
	extern u8 SnowheadStrayFairies;
	extern u8 GBTStrayFairies;
	extern u8 StoneTowerStrayFairies;
	//Drops & Bottle Contents Access
	extern bool DekuNutDrop;
	extern bool NutPot;
	extern bool NutCrate;
	extern bool DekuBabaNuts;
	extern bool DekuStickDrop;
	extern bool StickPot;
	extern bool DekuBabaSticks;
	extern bool BugsAccess;
	extern bool BugShrub;
	extern bool WanderingBugs;
	extern bool BugRock;
	extern bool FishAccess;
	extern bool FishGroup;
	extern bool LoneFish;
	extern bool BombchuDrop;
	extern bool BuyBombchus5;
	extern bool BuyBombchus10;
	extern bool BuyBombchus20;

	//Helpers, Events, Locations
	extern bool MagicMeter;
	extern bool BombBag;
	extern bool Explosives;
	extern bool Scarecrow;
	extern bool Bombs;
	extern bool Nuts;
	extern bool Sticks;
	extern bool Bugs;
	extern bool Fish;
	extern bool HasBombchus;
	extern bool FoundBombchus;
	extern bool HasExplosives;
	extern bool CanBlastOrSmash;
	extern bool CanCutShrubs;
	extern bool CanDive;
	extern bool CanPlantBugs;
	extern bool CanRideEpona;
	extern bool CanPlantBean;
	extern bool CanOpenBombGrotto;
	extern bool CanOpenStormGrotto;
	extern bool HasFireSource;
	extern bool HasFireSourceWithTorch;
	extern bool HasShield;
	extern bool CanShield;
	extern bool IsItem;
	extern bool CanShootBubble;
	extern bool CanUseProjectile;
	extern bool Arrows;
	extern bool AnyBottle;
	extern bool AnySword;
	extern bool AnyBombBag;
	extern bool AnyMagicBean;
	extern bool WaterForBeans;
	extern bool TwoBottles;
	extern bool AnyWallet;
	extern bool LimitlessBeans;
	extern bool AnyShield;
	extern bool AnyHealingPotion;
	extern bool AnyRedPotion;
	extern bool AnyBluePotion;
	extern bool UseFireArrow;
	extern bool UseIceArrow;
	extern bool UseLightArrow;
	extern bool AnyBSword;
	//Locational Helpers
	extern bool PoisonSwampAccess;
	extern bool WoodfallTempleAccess;
	extern bool WoodfallClear;
	extern bool NorthAccess;
	extern bool SnowheadTempleAccess;
	extern bool SnowheadClear;
	extern bool EponaAccess;
	extern bool WestAccess;
	extern bool PiratesFortressAccess;
	extern bool GreatBayTempleAccess;
	extern bool GreatBayClear;
	extern bool EastAccess;
	extern bool IkanaCanyonAccess;
	extern bool StoneTowerTempleAcccess;
	extern bool InvertedStoneTowerTempleAccess;
	extern bool StoneTowerClear;
	extern bool MoonAccess;
	extern bool OneWoodfallKey;
	extern bool OneSnowheadKey;
	extern bool TwoSnowheadKeys;
	extern bool OneGreatBayKey;
	extern bool OneStoneTowerKey;
	extern bool TwoStoneTowerKeys;
	extern bool ThreeStoneTowerKeys;
	extern bool SwampSpiderhouseTreeRoom;
	extern bool OceanSkulltulas;
	extern bool IkanaGraveyardAccess;
	extern bool FightTwinmold;
	extern bool PinnacleRockAccess;
	extern bool ExitOceanSpiderHouse;
	extern bool NightInnAccess;
	extern bool EnterSnowheadTemple;
	extern bool GBTReverseWaterDirection;
	extern bool Fighting;
	extern bool CrossPoisonWater;
	extern bool AccessToAllOceanSpiders;
	extern bool AccessToAllSwampSpiders;
	extern bool ClockTownStrayFairy;
	extern bool AllWoodfallStrays;
	extern bool AllSnowheadStrays;
	extern bool AllGreatBayStrays;
		extern bool AllStoneTowerStrays;
		extern bool AnyPaper;
	extern bool AllZoraEggs;
	//Tricks
		extern bool DekuStickFighting;
	extern bool PoisonWaterAsZora;
	extern bool WFT2ndFloorSkip;
	extern bool TakeDamage;

	//placement tracking
	extern u8 AddedProgressiveBombBags;
	extern u8 AddedProgressiveMagics;
	extern u8 AddedProgressiveBows;
	extern u8 AddedProgressiveWallets;
	extern u8 SwampTokensInPool;
	extern u8 OceanTokensInPool;
	extern u8 WFStraysInPool;
	extern u8 SHStraysInPool;
	extern u8 STStraysInPool;
	extern u8 PlacedMasks;

	//new helpers
	extern bool SHSwitchPress;
	extern bool ReverseWaterFlow;
	extern bool RedSwitch;
	extern bool RedSwitch2;
	extern bool GreenSwitch;
	extern bool GreenSwitch2;
	extern bool GreenValve;
	extern bool PirateBees;
	extern bool MusicBoxOn;
	extern bool IkanaLightSwitch;
	extern bool IkanaCastleRoofHole;
	extern bool ArmosRoomLightHole;
	extern bool InvertedChestSpawn;
	extern bool EnterSakonHideout;
	
	extern bool AtDay;
	extern bool AtNight;
	extern u8 Day;
	extern bool IsDay1;
	extern bool IsDay2;
	extern bool IsDay3;

	extern bool CanGoToMoon;

	void UpdateHelpers();
	bool CanPlay(bool song);
	//bool IsMagicArrow(ItemKey item);
	//bool IsItemOrMask(ItemKey item);
	//bool HasItem(ItemKey itemName);
	bool CanUse(ItemKey itemName);
	bool HasProjectile(ItemKey itemName);
	bool SmallKeys(u8 dungeonKeyCount, u8 requiredAmount);
	bool ZoraEggCount(u8 currentEggCount, u8 requiredAmount);
	bool EventsUpdated();
	void LogicReset();
}