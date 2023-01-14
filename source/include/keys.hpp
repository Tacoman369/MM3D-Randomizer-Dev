#pragma once

#include <3ds.h>

using HintKey          = u32;
using ItemKey          = u32;
using LocationKey      = u32;
using AreaKey          = u32;

typedef enum {
  NONE,
  TEST,
  
  //ITEMS
  KOKIRI_SWORD,
  GREAT_FAIRYS_SWORD,
  HEROS_SHIELD,
  DEKU_STICK,
  LAND_TITLE,
  SWAMP_TITLE,
  MOUNTAIN_TITLE,
  OCEAN_TITLE,
  BOMBERS_NOTEBOOK,
  MOONS_TEAR,
  SPIN_ATTACK,
  LENS_OF_TRUTH,
  HEROS_BOW,
  FIRE_ARROWS,
  ICE_ARROWS,
  LIGHT_ARROWS,
  HOOKSHOT,
  MAGIC_BEAN,
  MAGIC_BEAN_PACK,
  DOUBLE_DEFENSE,
  OCARINA_OF_TIME,
  PICTOGRAPH_BOX,
  POWDER_KEG,
  KEATON_MASK,
  BUNNY_HOOD,
  GORON_MASK,
  ZORA_MASK,
  DEKU_MASK,
  POSTMANS_HAT,
  ALL_NIGHT_MASK,
  BLAST_MASK,
  STONE_MASK,
  GREAT_FAIRYS_MASK,
  BREMEN_MASK,
  DON_GEROS_MASK,
  MASK_OF_SCENTS,
  ROMANIS_MASK,
  CIRCUS_LEADERS_MASK,
  KAFEIS_MASK,
  COUPLES_MASK,
  KAMAROS_MASK,
  GIBDOS_MASK,
  GAROS_MASK,
  CAPTAINS_HAT,
  GIANTS_MASK,
  FIERCE_DIETY_MASK,
  MASK_OF_TRUTH,
  SWAMP_SKULLTULA_TOKEN,
  OCEANSIDE_SKULLTULA_TOKEN,
  CT_STRAY_FAIRY,
  WF_STRAY_FAIRY,
  SH_STRAY_FAIRY,
  GBT_STRAY_FAIRY,
  ST_STRAY_FAIRY,
  FISHING_PASS,

  ROOM_KEY,
  LETTER_KAFEI,
  PENDANT_MEMORIES,
  LETTER_MAMA,

  PROGRESSIVE_SWORD,
  PROGRESSIVE_BOMB_BAG,
  PROGRESSIVE_BOW,
  PROGRESSIVE_WALLET,
  PROGRESSIVE_MAGIC_METER,
  PROGRESSIVE_BOMBCHUS,

  //Keys just used for Logic
  RAZOR_SWORD,
  GILDED_SWORD,
  MIRROR_SHIELD,
  LARGE_QUIVER,
  LARGEST_QUIVER,
  BOMB_BAG,
  BIG_BOMB_BAG,
  BIGGEST_BOMB_BAG,
  ADULT_WALLET,
  GIANT_WALLET,
  MAGIC_POWER,
  EXTENDED_MAGIC_POWER,
  SCARECROW,
	
  STARTING_SWORD,
  STARTING_SHIELD,
  STARTING_HEART_CONTAINER1,
  STARTING_HEART_CONTAINER2,
	
  EMPTY_BOTTLE,
  EMPTY_BOTTLE1,
  EMPTY_BOTTLE2,
  BOTTLE_WITH_MILK,
  BOTTLE_WITH_RED_POTION,
  GOLD_DUST,
  CHATEAU_ROMANI,
  BOTTLE_WITH_MYSTERY_MILK,
	
  DEKU_PRINCESS,
  BOTTLE_WITH_FAIRY,
  BOTTLE_WITH_BUGS,
  BOTTLE_WITH_POE,
  BOTTLE_WITH_BIG_POE,
  BOTTLE_WITH_SPRING_WATER,
  BOTTLE_WITH_HOT_SPRING_WATER,
  BOTTLE_WITH_ZORA_EGG,
  BOTTLE_WITH_MUSHROOM,
  BOTTLE_WITH_GREEN_POTION,
  BOTTLE_WITH_BLUE_POTION,
  BOTTLE_WITH_FISH,
  ZORA_EGG,
  SEAHORSE,
	
  SONG_OF_TIME,
  SONG_OF_STORMS,
  SONATA_OF_AWAKENING,
  GORONS_LULLABY,
  NEW_WAVE_BOSSA_NOVA,
  ELEGY_OF_EMPTINESS,
  OATH_TO_ORDER,
  EPONAS_SONG,
  INVERTED_SONG_OF_TIME,
  SONG_OF_DOUBLE_TIME,
  SONG_OF_HEALING,
  SONG_OF_SOARING,
  SCARECROW_SONG,
	
  MAP,
  WOODFALL_TEMPLE_MAP,
  SNOWHEAD_TEMPLE_MAP,
  GBT_MAP,
  STONE_TOWER_TEMPLE_MAP,
  CLOCK_TOWN_MAP,
  WOODFALL_MAP,
  SNOWHEAD_MAP,
  GREAT_BAY_MAP,
  STONE_TOWER_MAP,
  ROMANI_RANCH_MAP,

  COMPASS,
  WOODFALL_TEMPLE_COMPASS,
  SNOWHEAD_TEMPLE_COMPASS,
  GBT_COMPASS,
  STONE_TOWER_TEMPLE_COMPASS,
  
  BOSS_KEY,
  WOODFALL_TEMPLE_BOSS_KEY,
  SNOWHEAD_TEMPLE_BOSS_KEY,
  GBT_BOSS_KEY,
  STONE_TOWER_TEMPLE_BOSS_KEY,

  SMALL_KEY,
  WOODFALL_TEMPLE_SMALL_KEY,
  SNOWHEAD_TEMPLE_SMALL_KEY,
  GBT_SMALL_KEY,
  STONE_TOWER_TEMPLE_SMALL_KEY,

  ODOLWAS_REMAINS,
  GOHTS_REMAINS,
  GYORGS_REMAINS,
  TWINMOLDS_REMAINS,
	
  RECOVERY_HEART,
  GREEN_RUPEE,
  BLUE_RUPEE,
  RED_RUPEE,
  PURPLE_RUPEE,
  SILVER_RUPEE,
  HUGE_RUPEE,
  PIECE_OF_HEART,
  HEART_CONTAINER,
  ICE_TRAP,
  MILK,
	
  BOMBS_5,
  BOMBS_10,
  BOMBS_20,
  BOMBCHU_5,
  BOMBCHU_10,
  BOMBCHU_20,
  BOMBCHU_DROP,
  ARROWS_5,
  ARROWS_10,
  ARROWS_30,
  DEKU_NUTS_5,
  DEKU_NUTS_10,
  DEKU_STICK_1,
  RED_POTION_REFILL,
  GREEN_POTION_REFILL,
  BLUE_POTION_REFILL,

  MAJORAS_MASK,
  EPONA,
  HINT,
	
  //Shop ITEMS
  BUY_ARROWS_10,
  BUY_ARROWS_30,
  BUY_DEKU_NUT_10,
  BUY_DEKU_STICK_1,
  BUY_BOMBS_10,
  BUY_RED_POTION,
  BUY_GREEN_POTION,
  BUY_BLUE_POTION,
  BUY_HEROS_SHIELD,
  BUY_BOMBCHU_10,
  SOLD_OUT,
  BUY_FAIRYS_SPIRIT,
  BUY_MAGIC_BEAN,
	
  //ITEMLOCATIONS

  //DUNGEON REWARDS
  LINKS_POCKET,
  ODOLWA,
  GOHT,
  GYORG,
  TWINMOLD,
  MAJORA,

  //SONGS
  HMS_SONG_OF_HEALING,
  SOUTHERN_SWAMP_MUSIC_STATUE,
  GIANTS_OATH_TO_ORDER,
  DEKU_PALACE_IMPRISONED_MONKEY,
  GORON_VILLAGE_GORON_LULLABY,
  GBC_BABY_ZORAS,
  ROMANI_RANCH_ROMANIS_GAME,

//// Overworld  
// Clock Tower
  CLOCK_TOWER_OCARINA_OF_TIME,
  HMS_DEKU_MASK,
  HMS_BOMBERS_NOTEBOOK,
  HMS_STARTING_SWORD,
  HMS_STARTING_SHIELD,
  PRE_CLOCK_TOWN_CHEST,
//Deku Palace
  DEKU_PALACE_BEAN_DADDY,
  DEKU_PALACE_WEST_GARDEN,
  DEKU_PALACE_BUTLER_RACE,
  DEKU_PALACE_BEAN_GROTTO_CHEST,
//East Clock Town
  E_CLOCK_TOWN_AROMA_IN_BAR,
  E_CLOCK_TOWN_ARCHERY_1,
  E_CLOCK_TOWN_ARCHERY_1_ALT,
  E_CLOCK_TOWN_ARCHERY_2,
  E_CLOCK_TOWN_MAYOR,
  E_CLOCK_TOWN_HONEY_DARLING_3DAYS,
  E_CLOCK_TOWN_TREASURE_CHEST_GAME_GORON,
  E_CLOCK_TOWN_POSTMAN_FREEDOM,
  E_CLOCK_TOWN_GORMAN,
  E_CLOCK_TOWN_AROMA_IN_OFFICE,
  BOMBERS_HIDEOUT_CHEST,
  E_CLOCK_TOWN_CHEST,
  E_CLOCK_TOWN_MILK_BAR_CHATEAU,
  E_CLOCK_TOWN_MILK_BAR_MILK,
  E_CLOCK_TOWN_GORMAN_QUEST,
  E_CLOCK_TOWN_HONEY_DARLING_ANY_DAY,
  E_CLOCK_TOWN_TREASURE_CHEST_GAME_HUMAN,
  E_CLOCK_TOWN_TREASURE_CHEST_GAME_ZORA,
  E_CLOCK_TOWN_TREASURE_CHEST_GAME_DEKU,
//Goron Village
  GORON_VILLAGE_POWDER_KEG_CHALLENGE,
  GORON_VILLAGE_SCRUB_PURCHASE,
  GORON_VILLAGE_LENS_OF_TRUTH_CHEST,
  GORON_VILLAGE_SCRUB_TRADE,
  GORON_VILLAGE_LEDGE,
  LENS_CAVE_RED_RUPEE,
  LENS_CAVE_PURPLE_RUPEE,
  GORON_SHOP_ITEM_1,
  GORON_SHOP_ITEM_2,
  GORON_SHOP_ITEM_3,
//Great Bay Coast
  GBC_OCEAN_SPIDER_DAY1,
  GBC_OCEAN_SPIDER_DAY2,
  GBC_OCEAN_SPIDER_DAY3,
  GBC_FISHERMAN_GAME,
  GBC_OCEAN_SPIDER_CHEST,
  GBC_LAB_FISH,
  GBC_LEDGE,
  GBC_MIKAU,
  GBC_GROTTO_CHEST,
  GBC_GROTTO_COW1,
  GBC_GROTTO_COW2,
  GBC_FISHERMAN_PHOTO,
  TINGLE_GBC_1,
//Ikana Canyon
  IKANA_CANYON_GREAT_FAIRY,
  IKANA_CANYON_POE_HUT_HP,
  IKANA_CANYON_LEDGE,
  IKANA_CANYON_PAMELAS_FATHER,
  IKANA_CANYON_SECRET_SHRINE_GROTTO_CHEST,
  IKANA_CANYON_SCRUB_TRADE,
  IKANA_CANYON_SCRUB_PURCHASE,
  TINGLE_IKANA_CANYON_1,
//Ikana Graveyard
  IKANA_GRAVEYARD_DAMPE_DIGGING,
  IKANA_GRAVEYARD_IRON_KNUCKLE_CHEST,
  IKANA_GRAVEYARD_CAPTAIN_KEETA_CHEST,
  IKANA_GRAVEYARD_DAY_ONE_GRAVE_TABLET,
  IKANA_GRAVEYARD_DAY_ONE_GRAVE_BATS,
  IKANA_GRAVEYARD_GROTTO_CHEST,
//Laundry Pool
  LAUNDRY_POOL_KAFEI,
  LAUNDRY_POOL_CURIOSITY_SHOP_MAN_ONE,
  LAUNDRY_POOL_CURIOSITY_SHOP_MAN_TWO,
  LAUNDRY_POOL_GURU_GURU,
  LAUNDRY_POOL_SF,
//Milk Road
  MILK_ROAD_GORMAN_RACE,
  MILK_ROAD_GORMAN_MILK_BUY,
  TINGLE_MILK_ROAD_1,
//Mountain Village
  MOUNTAIN_VILLAGE_SMITH_DAY_ONE,
  MOUNTAIN_VILLAGE_SMITH_DAY_TWO,
  MOUNTAIN_VILLAGE_FROG_CHOIR,
  MOUNTAIN_VILLAGE_DARMANI,
  MOUNTAIN_VILLAGE_HUNGRY_GORON,
  MOUNTAIN_WATERFALL_CHEST,
  MOUNTAIN_VILLAGE_SPRING_WATER_GROTTO_CHEST,
//N Clock Town
  N_CLOCK_TOWN_GREAT_FAIRY_DEKU,
  N_CLOCK_TOWN_BOMBERS_HIDE_SEEK,
  N_CLOCK_TOWN_KEATON_QUIZ,
  N_CLOCK_TOWN_DEKU_PLAYGROUND_3DAYS,
  N_CLOCK_TOWN_TREE,
  N_CLOCK_TOWN_OLD_LADY,
  N_CLOCK_TOWN_GREAT_FAIRY_HUMAN,
  N_CLOCK_TOWN_DEKU_PLAYGROUND_ADAY,
  TINGLE_N_CLOCK_TOWN_1,
//Road to Snowhead
  ROAD_TO_SNOWHEAD_PILLAR,
  ROAD_TO_SNOWHEAD_GROTTO_CHEST,
//Pinnacle Rock
  PINNACLE_ROCK_SEAHORSES,
  PINNACLE_ROCK_UPPER_CHEST,
  PINNACLE_ROCK_LOWER_CHEST,
  PINNACLE_ROCK_ZORA_EGG1,
  PINNACLE_ROCK_ZORA_EGG2,
  PINNACLE_ROCK_ZORA_EGG3,
//Road to Ikana
  ROAD_TO_IKANA_PILLAR_CHEST,
  ROAD_TO_IKANA_GROTTO_CHEST,
//Road to Southern Swamp
  ROAD_TO_SS_ARCHERY_1,
  ROAD_TO_SS_ARCHERY_1_ALT,
  ROAD_TO_SS_ARCHERY_2,
  ROAD_TO_SS_TREE,
  ROAD_TO_SWAMP_GROTTO_CHEST,
  TINGLE_ROAD_TO_SS_1,
//Romani Ranch
  ROMANI_RANCH_ALIEN_DEFENSE,
  ROMANI_RANCH_DOG_RACE,
  ROMANI_RANCH_GROG,
  ROMANI_RANCH_CREMIA_ESCORT,
  ROMANI_RANCH_COW_1,
  ROMANI_RANCH_COW_2,
  ROMANI_RANCH_COW_3,
  DOGGY_RACETRACK_ROOF_CHEST,
//S Clock Town
  S_CLOCK_TOWN_SCRUB_TRADE,
  S_CLOCK_TOWN_POSTBOX,
  S_CLOCK_TOWN_CLOCK_TOWER_ENTRANCE,
  S_CLOCK_TOWN_STRAW_ROOF_CHEST,
  S_CLOCK_TOWN_FINAL_DAY_CHEST,
  S_CLOCK_TOWN_BANK_REWARD_1,
  S_CLOCK_TOWN_BANK_REWARD_2,
  S_CLOCK_TOWN_BANK_REWARD_3,
//Snowhead
  SNOWHEAD_GREAT_FAIRY,
//Southern Swamp
  SOUTHERN_SWAMP_KOUME,
  SOUTHERN_SWAMP_KOTAKE,
  SOUTHERN_SWAMP_SCRUB_TRADE,
  SOUTHERN_SWAMP_PICTOGRAPH_WINNER,
  SOUTHERN_SWAMP_BOAT_ARCHERY,
  SWAMP_TOURIST_CENTER_ROOF,
  SOUTHERN_SWAMP_NEAR_SPIDER_HOUSE_GROTTO_CHEST,
  SOUTHERN_SWAMP_SPIDER_HOUSE_REWARD,
  SOUTHERN_SWAMP_MYSTERY_WOODS_GROTTO_CHEST,
  SOUTHERN_SWAMP_KOTAKE_MUSHROOM_SALE,
  SOUTHERN_SWAMP_PICTOGRAPH_STANDARD,
  SOUTHERN_SWAMP_PICTOGRAPH_GOOD,
  SOUTHERN_SWAMP_SCRUB_PURCHASE,
  POTION_SHOP_ITEM_1,
  POTION_SHOP_ITEM_2,
  POTION_SHOP_ITEM_3,
//StockPotInn
  STOCKPOTINN_RESERVATION,
  STOCKPOTINN_MIDNIGHT_MEETING,
  STOCKPOTINN_TOILET_HAND,
  STOCKPOTINN_GRANDMA_SHORT_STORY,
  STOCKPOTINN_GRANDMA_LONG_STORY,
  STOCKPOTINN_ANJU_AND_KAFEI,
  STOCKPOTINN_STAFF_ROOM_CHEST,
  STOCKPOTINN_GUEST_ROOM_CHEST,
//Stone Tower
  STONE_TOWER_INVERTED_RIGHT_CHEST,
  STONE_TOWER_INVERTED_CENTER_CHEST,
  STONE_TOWER_INVERTED_LEFT_CHEST,
//Termina Field
  TERMINA_FIELD_MOONS_TEAR,
  TERMINA_FIELD_GOSSIP_STONES,
  TERMINA_FIELD_BUSINESS_SCRUB,
  TERMINA_FIELD_PEAHAT_GROTTO_CHEST,
  TERMINA_FIELD_DODONGO_GROTTO_CHEST,
  TERMINA_FIELD_BIO_BABA_GROTTO_BEEHIVE,
  TERMINA_FIELD_KAMARO,
  TERMINA_FIELD_PILLAR_GROTTO_CHEST,
  TERMINA_FIELD_GRASS_GROTTO_CHEST,
  TERMINA_FIELD_UNDERWATER_CHEST,
  TERMINA_FIELD_GRASS_CHEST,
  TERMINA_FIELD_STUMP_CHEST,
  TERMINA_FIELD_GROTTO_COW1,
  TERMINA_FIELD_GROTTO_COW2,
//Twin Islands
  HOT_SPRING_WATER_GROTTO_CHEST,
  TWIN_ISLANDS_GORON_RACE,
  TWIN_ISLANDS_GORON_RACETRACK_GROTTO_CHEST,
  TWIN_ISLANDS_UNDERWATER_RAMP_CHEST,
  TWIN_ISLANDS_CAVE_CHEST,
  TINGLE_TWIN_ISLANDS_1,
//W Clock Town
  W_CLOCK_TOWN_BOMB_BAG_BUY,
  W_CLOCK_TOWN_BIG_BOMB_BAG_BUY,
  W_CLOCK_TOWN_POSTMANS_GAME,
  W_CLOCK_TOWN_ROSA_SISTERS,
  W_CLOCK_TOWN_SWORDSMANS_SCHOOL,
  W_CLOCK_TOWN_ALL_NIGHT_MASK_BUY,
  W_CLOCK_TOWN_LOTTERY,
  W_CLOCK_TOWN_BOMB_SHOP_GORON,
  TRADING_POST_ITEM_1,
  TRADING_POST_ITEM_2,
  TRADING_POST_ITEM_3,
  TRADING_POST_ITEM_4,
  TRADING_POST_ITEM_5,
  TRADING_POST_ITEM_6,
  TRADING_POST_ITEM_7,
  TRADING_POST_ITEM_8,
  BOMB_SHOP_ITEM_1,
  BOMB_SHOP_ITEM_2,
  BOMB_SHOP_ITEM_3,
//Woodfall
  WOODFALL_BRIDGE_CHEST,
  WOODFALL_BEHIND_OWL_CHEST,
  ENTRANCE_TO_WOODFALL_CHEST,
  WOODFALL_GREAT_FAIRY,
//Zora Cape
  ZORA_CAPE_GREAT_FAIRY,
  ZORA_CAPE_BEAVER_RACE_1,
  ZORA_CAPE_BEAVER_RACE_2,
  ZORA_CAPE_LIKE_LIKE,
  ZORA_CAPE_LEDGE_NO_TREE,
  ZORA_CAPE_LEDGE_WITH_TREE,
  ZORA_CAPE_GROTTO_CHEST,
  ZORA_CAPE_UNDERWATER_CHEST,
//Zora Hall
  ZORA_HALL_SCRUB_TRADE,
  ZORA_HALL_EVAN,
  ZORA_HALL_LULU_ROOM_LEDGE,
  ZORA_HALL_SCRUB_PURCHASE,
  ZORA_HALL_STAGE_LIGHTS,
  ZORA_HALL_BAD_PHOTO_LULU,
  ZORA_HALL_GOOD_PHOTO_LULU,
  ZORA_SHOP_ITEM_1,
  ZORA_SHOP_ITEM_2,
  ZORA_SHOP_ITEM_3,
	
////DUNGEONS
//Woodfall Temple
  WOODFALL_TEMPLE_HEROS_BOW_CHEST,
  WOODFALL_TEMPLE_MAP_CHEST,
  WOODFALL_TEMPLE_COMPASS_CHEST,
  WOODFALL_TEMPLE_BOSS_KEY_CHEST,
  WOODFALL_TEMPLE_SMALL_KEY_CHEST,
  WOODFALL_TEMPLE_DEKU_PRINCESS,
  WF_SF_ENTRANCE_FAIRY,
  WF_SF_ENTRANCE_PLATFORM,
  WF_SF_MAIN_ROOM_BUBBLE,
  WF_SF_MAIN_ROOM_SWITCH,
  WF_SF_PRE_BOSS_LOWER_RIGHT_BUBBLE,
  WF_SF_PRE_BOSS_UPPER_RIGHT_BUBBLE,
  WF_SF_PRE_BOSS_UPPER_LEFT_BUBBLE,
  WF_SF_PRE_BOSS_PILLAR_BUBBLE,
  WF_SF_DEKU_BABA,
  WF_SF_DRAGONFLY_ROOM_BUBBLE,
  WF_SF_SKULLTULA,
  WF_SF_DARK_ROOM,
  WF_SF_JAR_FAIRY,
  WF_SF_BRIDGE_ROOM_BEEHIVE,
  WF_SF_PLATFORM_ROOM_BEEHIVE,
  ODOLWA_HEART_CONTAINER,	
//Snowhead Temple
  SNOWHEAD_TEMPLE_FIRE_ARROW_CHEST,
  SNOWHEAD_TEMPLE_MAP_CHEST,
  SNOWHEAD_TEMPLE_COMPASS_CHEST,
  SNOWHEAD_TEMPLE_BOSS_KEY_CHEST,
  SNOWHEAD_TEMPLE_BLOCK_ROOM_CHEST,
  SNOWHEAD_TEMPLE_ICICLE_ROOM_CHEST,
  SNOWHEAD_TEMPLE_BRIDGE_ROOM_CHEST,
  SH_SF_SNOW_ROOM_BUBBLE,
  SH_SF_CEILING_BUBBLE,
  SH_SF_DINOLFOS_1,
  SH_SF_DINOLFOS_2,
  SH_SF_BRIDGE_ROOM_LEDGE_BUBBLE,
  SH_SF_BRIDGE_ROOM_PILLAR_BUBBLE,
  SH_SF_MAP_ROOM_FAIRY,
  SH_SF_MAP_ROOM_LEDGE,
  SH_SF_BASEMENT,
  SH_SF_TWIN_BLOCK,
  SH_SF_ICICLE_ROOM_WALL,
  SH_SF_MAIN_ROOM_WALL,
  SH_SF_PILLAR_FREEZARDS,
  SH_SF_ICE_PUZZLE,
  SH_SF_CRATE,
  GOHT_HEART_CONTAINER,
//Great bay Temple
  GBT_ICE_ARROW_CHEST,
  GBT_MAP_CHEST,
  GBT_COMPASS_CHEST,
  GBT_BOSS_KEY_CHEST,
  GBT_SMALL_KEY_CHEST,
  GBT_SF_SKULLTULA,
  GBT_SF_WATER_CONTROL_UNDERWATER_BUBBLE,
  GBT_SF_WATERWHEEL_ROOM_LOWER,
  GBT_SF_WATERWHEEL_ROOM_UPPER,
  GBT_SF_GREEN_VALVE,
  GBT_SF_SEESAW_ROOM,
  GBT_SF_ENTRANCE_TORCHES,
  GBT_SF_BIO_BABAS,
  GBT_SF_UNDERWATER_BARREL,
  GBT_SF_WHIRLPOOL_BARREL,
  GBT_SF_WHIRLPOOL_JAR,
  GBT_SF_DEXIHANDS_JAR,
  GBT_SF_LEDGE_JAR,
  GBT_SF_PRE_BOSS_ROOM_BUBBLE,
  GBT_SF_PRE_BOSS_ROOM_UNDERWATER_BUBBLE,
  GYORG_HEART_CONTAINER,
//Stone Tower Temple
  STONE_TOWER_TEMPLE_MAP_CHEST,
  STONE_TOWER_TEMPLE_COMPASS_CHEST,
  STONE_TOWER_TEMPLE_BOSS_KEY_CHEST,
  STONE_TOWER_TEMPLE_ARMOS_ROOM_CHEST,
  STONE_TOWER_TEMPLE_BRIDGE_SWITCH_CHEST,
  STONE_TOWER_TEMPLE_UPDRAFT_ROOM_CHEST,
  STONE_TOWER_TEMPLE_DEATH_ARMOS_ROOM_CHEST,
  STONE_TOWER_TEMPLE_LIGHT_ARROW_CHEST,
  STONE_TOWER_TEMPLE_GIANTS_MASK_CHEST,
  ST_SF_MIRROR_SUN_BLOCK,
  ST_SF_LAVA_ROOM_LEDGE,
  ST_SF_LAVA_ROOM_FIRE_RING,
  ST_SF_EYEGORE,
  ST_SF_UPDRAFT_FIRE_RING,
  ST_SF_MIRROR_SUN_SWITCH,
  ST_SF_BOSS_WARP,
  ST_SF_WIZZROBE,
  ST_SF_DEATH_ARMOS,
  ST_SF_UPDRAFT_FROZEN_EYE,
  ST_SF_THIN_BRIDGE,
  ST_SF_BASEMENT_LEDGE,
  ST_SF_STATUE_EYE,
  ST_SF_UNDERWATER,
  ST_SF_BRIDGE_CRYSTAL,
  TWINMOLD_HEART_CONTAINER,
//Pirate Fortress
  PF_INTERIOR_HOOKSHOT_CHEST,
  PF_INT_LOWER_CHEST,
  PF_INT_UPPER_CHEST,
  PF_INT_TANK_CHEST,
  PF_INT_GUARD_ROOM_CHEST,
  PF_CAGE_ROOM_SHALLOW_CHEST,
  PF_CAGE_ROOM_DEEP_CHEST,
  PF_MAZE_CHEST,
  PF_SEWER_CAGE,
  PF_EXTERIOR_LOG_CHEST,
  PF_EXTERIOR_SAND_CHEST,
  PF_EXTERIOR_CORNER_CHEST,
  PF_INT_INVISIBLE_SOLDIER,
  PF_INT_HOOKSHOT_ROOM_ZORA_EGG,
  PF_INT_GUARD_ROOM_ZORA_EGG,
  PF_INT_BARREL_MAZE_ZORA_EGG,
  PF_INT_LAVA_ROOM_ZORA_EGG,
//Beneath the Well
  BENEATH_THE_WELL_MIRROR_SHIELD_CHEST,
  WELL_LEFT_PATH_CHEST,
  WELL_RIGHT_PATH_CHEST,  
  BENEATH_THE_WELL_COW,
//Ikana Castle
  IKANA_CASTLE_PILLAR,
  IKANA_CASTLE_IKANA_KING,
//Secret Shrine 
  SECRET_SHRINE_DINOLFOS_CHEST,
  SECRET_SHRINE_WIZZROBE_CHEST,
  SECRET_SHRINE_WART_CHEST,
  SECRET_SHRINE_GARO_CHEST,
  SECRET_SHRINE_FINAL_CHEST,
//The Moon
  THE_MOON_DEKU_TRIAL_BONUS,
  THE_MOON_GORON_TRIAL_BONUS,
  THE_MOON_ZORA_TRIAL_BONUS,
  THE_MOON_LINK_TRIAL_BONUS,
  THE_MOON_GARO_CHEST,
  THE_MOON_IRON_KNUCKLE_CHEST,
  THE_MOON_MAJORA_CHILD,
//Southern Swamp Skulltula House
  SSH_MAIN_ROOM_NEAR_CEILING,
  SSH_MAIN_ROOM_WATER,
  SSH_MAIN_ROOM_LOWER_LEFT_SOIL,
  SSH_MAIN_ROOM_LOWER_RIGHT_SOIL,
  SSH_MAIN_ROOM_UPPER_SOIL,
  SSH_MAIN_ROOM_PILLAR,
  SSH_MAIN_ROOM_UPPER_PILLAR,
  SSH_MAIN_ROOM_JAR,
  SSH_MONUMENT_ROOM_CRATE_1,
  SSH_MONUMENT_ROOM_CRATE_2,
  SSH_MONUMENT_ROOM_TORCH,
  SSH_MONUMENT_ROOM_ON_MONUMENT,
  SSH_MONUMENT_ROOM_LOWER_WALL,
  SSH_GOLD_ROOM_NEAR_CEILING,
  SSH_GOLD_ROOM_PILLAR,
  SSH_GOLD_ROOM_BEEHIVE,
  SSH_GOLD_ROOM_WALL,
  SSH_POT_ROOM_JAR,
  SSH_POT_ROOM_POT_1,
  SSH_POT_ROOM_POT_2,
  SSH_POT_ROOM_BEHIND_VINES,
  SSH_POT_ROOM_WALL,
  SSH_POT_ROOM_BEEHIVE_1,
  SSH_POT_ROOM_BEEHIVE_2,
  SSH_TREE_ROOM_TREE_1,
  SSH_TREE_ROOM_TREE_2,
  SSH_TREE_ROOM_TREE_3,
  SSH_TREE_ROOM_GRASS_1,
  SSH_TREE_ROOM_GRASS_2,
  SSH_TREE_ROOM_BEEHIVE,
//Oceanside Spider House
  OSH_ENTRANCE_LEFT_WALL,
  OSH_ENTRANCE_RIGHT_WALL,
  OSH_ENTRANCE_WEB,
  OSH_LIBRARY_HOLE_BEHIND_PICTURE,
  OSH_LIBRARY_HOLE_BEHIND_CABINET,
  OSH_LIBRARY_ON_CORNER_BOOKSHELF,
  OSH_LIBRARY_CEILING_EDGE,
  OSH_LIBRARY_BEHIND_BOOKCASE_1,
  OSH_LIBRARY_BEHIND_BOOKCASE_2,
  OSH_LIBRARY_BEHIND_PICTURE,
  OSH_SECOND_ROOM_CEILING_EDGE,
  OSH_SECOND_ROOM_CEILING_PLANK,
  OSH_SECOND_ROOM_JAR,
  OSH_SECOND_ROOM_WEBBED_HOLE,
  OSH_SECOND_ROOM_WEBBED_POT,
  OSH_SECOND_ROOM_UPPER_POT,
  OSH_SECOND_ROOM_BEHIND_SKULL_1,
  OSH_SECOND_ROOM_BEHIND_SKULL_2,
  OSH_SECOND_ROOM_LOWER_POT,
  OSH_STORAGE_ROOM_CEILING_WEB,
  OSH_STORAGE_ROOM_BEHIND_CRATE,
  OSH_STORAGE_ROOM_WALL,
  OSH_STORAGE_ROOM_CRATE,
  OSH_STORAGE_ROOM_BARREL,
  OSH_COLORED_SKULLS_CEILING_EDGE,
  OSH_COLORED_SKULLS_CHANDELIER_1,
  OSH_COLORED_SKULLS_CHANDELIER_2,
  OSH_COLORED_SKULLS_CHANDELIER_3,
  OSH_COLORED_SKULLS_BEHIND_PICTURE,
  OSH_COLORED_SKULLS_POT,
////EVENTS_AND_DROPS
  DEKU_BABA_STICKS,
  DEKU_BABA_NUTS,
  STICK_POT,
  NUT_POT,
  NUT_CRATE,
  LONE_FISH,
  FISH_GROUP,
  BUG_ROCK,
  BUG_SHRUB,
  WANDERING_BUGS,
  FAIRY_POT,
  FREE_FAIRIES,
  GOSSIP_STONE_FAIRY,
  BIG_POE_KILL,

  //AREAS
  ROOT,
  ROOT_EXITS,
  N_CLOCK_TOWN,
  CLOCK_TOWN_FAIRY_FOUNTAIN,
  CLOCK_TOWN_DEKU_PLAYGROUND,
  E_CLOCK_TOWN,
  STOCKPOTINN,
  STOCKPOTINN_GUEST_ROOM,
  STOCKPOTINN_STAFF_ROOM,
  STOCKPOTINN_GRANDMA_ROOM,
  CLOCK_TOWN_OBSERVATORY,
  CLOCK_TOWN_BAR,
  CLOCK_TOWN_HONEY_DARLING,
  CLOCK_TOWN_TREASURE_CHEST_GAME,
  CLOCK_TOWN_ARCHERY,
  CLOCK_TOWN_MAYOR_HOUSE,
  W_CLOCK_TOWN,
  CLOCK_TOWN_SWORDSMANS_SCHOOL,
  CLOCK_TOWN_POSTMAN_HOUSE,
  CLOCK_TOWN_LOTTERY,
  CLOCK_TOWN_BOMB_SHOP,
  CLOCK_TOWN_TRADING_POST,
  CLOCK_TOWN_CURIOSITY_SHOP,
  S_CLOCK_TOWN,
  CLOCK_TOWER,
  CLOCK_TOWER_ROOF,
  LAUNDRY_POOL,
  LAUNDRY_POOL_KAFEI_HIDEOUT,
  TERMINA_FIELD,
  TERMINA_FIELD_PEAHAT_GROTTO,
  TERMINA_FIELD_DODONGO_GROTTO,
  TERMINA_FIELD_BIO_BABA_GROTTO,
  TERMINA_FIELD_PILLAR_GROTTO,
  TERMINA_FIELD_GRASS_GROTTO,
  TERMINA_FIELD_BUSINESS_SCRUB_GROTTO,
  TERMINA_FIELD_COW_GROTTO,
  TERMINA_FIELD_GOSSIP_STONES_GROTTO,
  ROAD_TO_SOUTHERN_SWAMP,
  ROAD_TO_SOUTHERN_SWAMP_ARCHERY,
  ROAD_TO_SWAMP_GROTTO,
  SOUTHERN_SWAMP,
  SWAMP_TOURIST_CENTER,
  SOUTHERN_SWAMP_HAGS_POTION_SHOP,
  MYSTERY_WOODS,
  SOUTHERN_SWAMP_MYSTERY_WOODS_GROTTO,
  SOUTHERN_SWAMP_NEAR_SPIDER_HOUSE_GROTTO,
  SOUTHERN_SWAMP_TOP,
  DEKU_PALACE,
  DEKU_PALACE_INTERIOR,
  DEKU_PALACE_BEAN_GROTTO,
  DEKU_SHRINE,
  WOODFALL,
  WOODFALL_FAIRY_FOUNTAIN,
  PATH_TO_MOUNTAIN_VILLAGE,
  MOUNTAIN_VILLAGE,
  GORON_GRAVEYARD,
  MOUNTAIN_SMITHY,
  MOUNTAIN_VILLAGE_SPRING_WATER_GROTTO,
  TWIN_ISLANDS,
  GORON_RACETRACK,
  TWIN_ISLANDS_GORON_RACETRACK_GROTTO,
  TWIN_ISLANDS_SPRING_WATER_GROTTO,
  GORON_VILLAGE,
  GORON_VILLAGE_LENS_CAVE,
  GORON_VILLAGE_INTERIOR,
  GORON_VILLAGE_SHOP,
  ROAD_TO_SNOWHEAD,
  ROAD_TO_SNOWHEAD_GROTTO,
  SNOWHEAD,
  SNOWHEAD_FAIRY_FOUNTAIN,
  MILK_ROAD,
  GORMAN_TRACK,
  ROMANI_RANCH,
  DOGGY_RACETRACK,
  CUCCO_SHACK,
  ROMANI_RANCH_HOUSE,
  GREAT_BAY_COAST,
  GREAT_BAY_COAST_MARINE_LAB,
  GREAT_BAY_COAST_GROTTO,
  FISHERMAN_HUT,
  PINNACLE_ROCK,
  ZORA_CAPE,
  WATERFALL_RAPIDS,
  GREAT_BAY_FAIRY_FOUNTAIN,
  ZORA_CAPE_GROTTO,
  ZORA_HALL,
  ZORA_HALL_EVANS_ROOM,
  ZORA_HALL_LULUS_ROOM,
  ZORA_HALL_JAPAS_ROOM,
  ZORA_HALL_TIJOS_ROOM,
  ZORA_HALL_SHOP,
  ZORA_HALL_BACK_ENTRANCE,
  ROAD_TO_IKANA,
  ROAD_TO_IKANA_GROTTO,
  IKANA_GRAVEYARD,
  IKANA_GRAVEYARD_GROTTO,
  IKANA_GRAVEYARD_BELOW_GRAVE1,
  IKANA_GRAVEYARD_BATS_ROOM,
  IKANA_GRAVEYARD_TABLET_ROOM,
  IKANA_GRAVEYARD_BELOW_GRAVE2,
  IKANA_GRAVEYARD_IRON_KNUCKLE_ROOM,
  IKANA_GRAVEYARD_BELOW_GRAVE3,
  DAMPES_HUT,
  IKANA_CANYON,
  IKANA_CANYON_UPPER,
  IKANA_CANYON_CAVE,
  SAKONS_HIDEOUT,
  MUSIC_BOX_HOUSE,
  IKANA_CANYON_POE_HUT,
  IKANA_CANYON_GREAT_FAIRY_FOUNTAIN,
  IKANA_CANYON_SECRET_SHRINE_GROTTO,
  STONE_TOWER,
  INVERTED_STONE_TOWER,
	
  WOODFALL_TEMPLE_ENTRANCE,
  WOODFALL_TEMPLE_MAIN_ROOM,
  WOODFALL_TEMPLE_UPPER_MAIN_ROOM,
  WOODFALL_TEMPLE_PLATFORM_ROOM,
  WOODFALL_TEMPLE_MAP_ROOM,
  WOODFALL_TEMPLE_UPPER_PLATFORM_ROOM,
  WOODFALL_TEMPLE_BOSS_KEY_ROOM,
  WOODFALL_TEMPLE_BOW_ROOM,
  WOODFALL_TEMPLE_BRIDGE_ROOM,
  WOODFALL_TEMPLE_COMPASS_ROOM,
  WOODFALL_TEMPLE_DARK_ROOM,
  WOODFALL_TEMPLE_DRAGONFLY_ROOM,
  WOODFALL_TEMPLE_PRE_BOSS_ROOM,
  WOODFALL_TEMPLE_BOSS_ROOM,
  WOODFALL_TEMPLE_PRINCESS_ROOM,
  SNOWHEAD_TEMPLE_ENTRANCE,
  SNOWHEAD_TEMPLE_BRIDGE_ROOM,
  SNOWHEAD_TEMPLE_LOWER_MAP_ROOM,
  SNOWHEAD_TEMPLE_UPPER_MAP_ROOM,
  SNOWHEAD_TEMPLE_MAIN_ROOM_1F,
  SNOWHEAD_TEMPLE_BASEMENT,
  SNOWHEAD_TEMPLE_LOWER_PILLAR_FREEZARDS_ROOM,
  SNOWHEAD_TEMPLE_DOUBLE_BLOCK_ROOM_LOWER,
  SNOWHEAD_TEMPLE_DOUBLE_BLOCK_ROOM_UPPER,
  SNOWHEAD_TEMPLE_COMPASS_ROOM,
  SNOWHEAD_TEMPLE_ICICLE_ROOM,
  SNOWHEAD_TEMPLE_GORON_SWITCH_PUZZLE_ROOM,
  SNOWHEAD_TEMPLE_MAIN_ROOM_2F,
  SNOWHEAD_TEMPLE_MINIBOSS_ROOM,
  SNOWHEAD_TEMPLE_PILLAR_FREEZARDS_ROOM,
  SNOWHEAD_TEMPLE_PILLAR_SWITCH_ROOM,
  SNOWHEAD_TEMPLE_MAIN_ROOM_3F,
  SNOWHEAD_TEMPLE_SNOW_ROOM,
  SNOWHEAD_TEMPLE_MAIN_ROOM_4F,
  SNOWHEAD_TEMPLE_DINOLFOS_ROOM,
  SNOWHEAD_TEMPLE_WIZZROBE_ROOM,
  SNOWHEAD_TEMPLE_BOSS_KEY_ROOM,
  SNOWHEAD_TEMPLE_BOSS_ROOM,
  GREAT_BAY_TEMPLE_ENTRANCE,
  GREAT_BAY_TEMPLE_WATER_CONTROL_ROOM,
  GREAT_BAY_TEMPLE_WHIRLPOOL_ROOM,
  GREAT_BAY_TEMPLE_RED_SWITCH_ROOM,
  GREAT_BAY_TEMPLE_MAP_ROOM,
  GREAT_BAY_TEMPLE_RED_SWITCH2_ROOM,
  GREAT_BAY_TEMPLE_BIO_BABA_ROOM,
  GREAT_BAY_TEMPLE_COMPASS_ROOM,
  GREAT_BAY_TEMPLE_FROG_MINIBOSS_ROOM,
  GREAT_BAY_TEMPLE_BOSS_KEY_ROOM,
  GREAT_BAY_TEMPLE_PRE_MINIBOSS_ROOM,
  GREAT_BAY_TEMPLE_MINI_BOSS_ROOM,
  GREAT_BAY_TEMPLE_GREEN_SWITCH_ROOM,
  GREAT_BAY_TEMPLE_WATER_WHEEL_ROOM,
  GREAT_BAY_TEMPLE_SEESAW_ROOM,
  GREAT_BAY_TEMPLE_PRE_BOSS_ROOM,
  GREAT_BAY_TEMPLE_BOSS_ROOM,
  STONE_TOWER_TEMPLE_ENTRANCE,
  STONE_TOWER_TEMPLE_UPRIGHT_DEATH_ARMOS_ROOM,
  STONE_TOWER_TEMPLE_ARMOS_ROOM,
  STONE_TOWER_TEMPLE_WATER_BRIDGE_ROOM,
  STONE_TOWER_TEMPLE_UPRIGHT_UPDRAFT_ROOM,
  STONE_TOWER_TEMPLE_SUN_BLOCK_PUZZLE_ROOM,
  STONE_TOWER_TEMPLE_LAVA_ROOM,
  STONE_TOWER_TEMPLE_GARO_ROOM,
  STONE_TOWER_TEMPLE_THIN_BRIDGE_ROOM,
  STONE_TOWER_TEMPLE_EYEGORE_ROOM,
  STONE_TOWER_TEMPLE_INVERTED_ENTRANCE,
  STONE_TOWER_TEMPLE_UPDRAFT_ROOM,
  STONE_TOWER_TEMPLE_FLIPPING_LAVA_ROOM,
  STONE_TOWER_TEMPLE_FLIPPING_BLOCK_PUZZLE,
  STONE_TOWER_TEMPLE_WIZZROBE_ROOM,
  STONE_TOWER_TEMPLE_DEATH_ARMOS_ROOM,
  STONE_TOWER_TEMPLE_INVERTED_BRIDGE_ROOM,
  STONE_TOWER_TEMPLE_INVERTED_ENTRANCE_DEATH_ARMOS_LEDGE,
  STONE_TOWER_TEMPLE_PRE_GOMESS_ROOM,
  STONE_TOWER_TEMPLE_GOMESS_ROOM,
  STONE_TOWER_TEMPLE_INVERTED_THIN_BRIDGE_ROOM,
  STONE_TOWER_TEMPLE_PRE_BOSS_ROOM,
  STONE_TOWER_TEMPLE_BOSS_ROOM,
  PIRATE_FORTRESS_EXTERIOR,
  PIRATE_FORTRESS_MAZE_ROOM,
  PIRATE_FORTRESS_CAGE_ROOM,
  PIRATE_FORTRESS_EXTERIOR_TOP,
  PIRATE_FORTRESS_INTERIOR,
  PIRATE_FORTRESS_HOOKSHOT_ROOM,
  PIRATE_FORTRESS_HOOKSHOT_ROOM_TOP,
  PIRATE_FORTRESS_BARREL_MAZE,
  PIRATE_FORTRESS_LAVA_ROOM,
  PIRATE_FORTRESS_GUARD_ROOM,
  BENEATH_THE_WELL_ENTRANCE,
  BENEATH_THE_WELL_LEFT_PATH_ROOM,
  BENEATH_THE_WELL_LEFT_PATH_HOT_WATER_ROOM,
  BENEATH_THE_WELL_LEFT_PATH_RIGHT_DOOR_ROOM,
  BENEATH_THE_WELL_LEFT_PATH_FAIRY_FOUNTAIN,
  BENEATH_THE_WELL_LEFT_PATH_CHEST_ROOM,
  BENEATH_THE_WELL_RIGHT_PATH_ROOM,
  BENEATH_THE_WELL_PRE_COW_AND_BIG_POE_ROOM,
  BENEATH_THE_WELL_COW_ROOM,
  BENEATH_THE_WELL_BIG_POE_ROOM,
  BENEATH_THE_WELL_RIGHT_PATH_LEFT_DOOR_ROOM,
  BENEATH_THE_WELL_RIGHT_PATH_CHEST_ROOM,
  BENEATH_THE_WELL_PRE_MIRROR_SHIELD_ROOM,
  BENEATH_THE_WELL_MIRROR_SHIELD_ROOM,
  IKANA_CASTLE_EXTERIOR_LOWER,
  IKANA_CASTLE_ENTRANCE,
  IKANA_CASTLE_LAVA_BLOCKS_ROOM,
  IKANA_CASTLE_NO_FLOOR_ROOM,
  IKANA_CASTLE_LEFT_STAIRWELL,
  IKANA_CASTLE_EXTERIOR_UPPER_LEFT,
  IKANA_CASTLE_RIGHT_ROOM,
  IKANA_CASTLE_WIZZROBE_ROOM,
  IKANA_CASTLE_RIGHT_STAIRWELL,
  IKANA_CASTLE_EXTERIOR_UPPER_RIGHT,
  IKANA_CASTLE_THRONE_ROOM,
  SECRET_SHRINE_ENTRANCE,
  SECRET_SHRINE_CENTER_ROOM,
  SECRET_SHRINE_DINOLFOS_ROOM,
  SECRET_SHRINE_WIZZROBE_ROOM,
  SECRET_SHRINE_WART_ROOM,
  SECRET_SHRINE_GARO_ROOM,
  THE_MOON_DEKU_TRIAL,
  THE_MOON_DEKU_TRIAL_KID_ROOM,
  THE_MOON_GORON_TRIAL,
  THE_MOON_GORON_TRIAL_KID_ROOM,
  THE_MOON_ZORA_TRIAL,
  THE_MOON_ZORA_TRIAL_KID_ROOM,
  THE_MOON_LINK_TRIAL_ENTRANCE,
  THE_MOON_LINK_TRIAL_DINOLFOS_ROOM,
  THE_MOON_LINK_TRIAL_GOSSIP_ROOM_1,
  THE_MOON_LINK_TRIAL_GARO_ROOM,
  THE_MOON_LINK_TRIAL_GOSSIP_ROOM_2,
  THE_MOON_LINK_TRIAL_IRON_KNUCKLE_ROOM,
  THE_MOON_LINK_TRIAL_PIECE_OF_HEART_ROOM,
  THE_MOON_LINK_TRIAL_KID_ROOM,
  THE_MOON_TREE_ROOM,
  THE_MOON_BOSS_ROOM,
  SSH_ENTRANCE,
  SSH_MAIN_ROOM_LOWER,
  SSH_MAIN_ROOM_UPPER,
  SSH_MONUMENT_ROOM_LOWER,
  SSH_MONUMENT_ROOM_UPPER,
  SSH_GOLD_ROOM_LOWER,
  SSH_GOLD_ROOM_UPPER,
  SSH_POT_ROOM_LOWER,
  SSH_POT_ROOM_UPPER,
  SSH_TREE_ROOM,
  OSH_ENTRANCE,
  OSH_LIBRARY,
  OSH_SECOND_ROOM,
  OSH_STORAGE_ROOM,
  OSH_COLORED_SKULLS,
	
  //DUNGEONS
  WOODFALL_TEMPLE,
  SNOWHEAD_TEMPLE,
  GREAT_BAY_TEMPLE,
  STONE_TOWER_TEMPLE,
  PIRATE_FORTRESS,
  BENEATH_THE_WELL,
  IKANA_CASTLE,
  SECRET_SHRINE,
  SSH,
  OSH,
  THE_MOON,
	
  //HINTS
  PREFIX,
  WAY_OF_THE_HERO,
  PLUNDERING,
  FOOLISH,
  CAN_BE_FOUND_AT,
  HOARDS,
		
  JUNK01,
  JUNK02,
  JUNK03,
  JUNK04,
  JUNK05,
  JUNK06,
  JUNK07,
  JUNK08,
  JUNK09,
  JUNK10,
  JUNK11,
  JUNK12,
  JUNK13,
  JUNK14,
  JUNK15,
  JUNK16,
  JUNK17,
  JUNK18,
  JUNK19,
  JUNK20,
  JUNK21,
  JUNK22,
  JUNK23,
  JUNK24,
  JUNK25,
  JUNK26,
  JUNK27,
  JUNK28,
  JUNK29,
  JUNK30,
  JUNK31,
  JUNK32,
  JUNK33,
  JUNK34,
  JUNK35,
  JUNK36,
  JUNK37,
  JUNK38,
  JUNK39,
  JUNK40,
  JUNK41,
  JUNK42,
  JUNK43,
  JUNK44,
  JUNK45,
  JUNK46,
  JUNK47,
  JUNK48,
  JUNK49,
  JUNK50,
  JUNK51,
  JUNK52,
  JUNK53,
  JUNK54,
  JUNK55,
  JUNK56,
  JUNK57,
  JUNK58,
  JUNK59,
  JUNK60,
  JUNK61,
  JUNK62,
  JUNK63,
  JUNK64,
  JUNK65,
  JUNK66,
  JUNK67,
  JUNK68,
  JUNK69,
  JUNK70,
  JUMK71,
  JUNK72,
  JUNK73,
  JUNK74,
  JUNK75,
  JUNK76,
  JUNK77,
	
  KEY_ENUM_MAX,
} Key;