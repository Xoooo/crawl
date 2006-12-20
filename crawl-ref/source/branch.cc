/*
 *  Modified for Crawl Reference by $Author: haranp $ on $Date: 2006-12-10 22:28:21 +0200 (Sun, 10 Dec 2006) $
 */

#include "AppHdr.h"
#include "branch.h"
#include "mon-pick.h"

Branch branches[] = {

    { BRANCH_MAIN_DUNGEON, BRANCH_MAIN_DUNGEON, 27, -1,
      NUM_FEATURES, NUM_FEATURES,  // sentinel values
      "Dungeon", "the Dungeon", "D",
      NULL,
      LIGHTGREY, BROWN,
      mons_standard_rare, mons_standard_level, NULL,
      8, 'D'
    },

    { BRANCH_ECUMENICAL_TEMPLE, BRANCH_MAIN_DUNGEON, 1, 5,
      DNGN_ENTER_TEMPLE, DNGN_RETURN_FROM_TEMPLE,
      "Temple", "the Ecumenical Temple", "Temple",
      NULL,
      LIGHTGREY, LIGHTGREY, mons_standard_rare, mons_standard_level, NULL, 
      0, 'T' },

    { BRANCH_ORCISH_MINES, BRANCH_MAIN_DUNGEON, 4, 6,
      DNGN_ENTER_ORCISH_MINES, DNGN_RETURN_FROM_ORCISH_MINES,
      "Orcish Mines", "the Orcish Mines", "Orc",
      NULL,
      BROWN, BROWN,
      mons_mineorc_rare, mons_mineorc_level, NULL,
      20, 'O' },

    { BRANCH_ELVEN_HALLS, BRANCH_ORCISH_MINES, 7, 4,
      DNGN_ENTER_ELVEN_HALLS, DNGN_RETURN_FROM_ELVEN_HALLS,
      "Elven Halls", "the Elven Halls", "Elf",
      NULL,
      DARKGREY, LIGHTGREY, mons_hallelf_rare, mons_hallelf_level, NULL,
      8, 'E' },

    { BRANCH_LAIR, BRANCH_MAIN_DUNGEON, 10, 8,
      DNGN_ENTER_LAIR, DNGN_RETURN_FROM_LAIR,
      "Lair", "the Lair of Beasts", "Lair",
      NULL,
      GREEN, BROWN, mons_lair_rare, mons_lair_level, NULL,
      5, 'L' },

    { BRANCH_SWAMP, BRANCH_LAIR, 5, 3,
      DNGN_ENTER_SWAMP, DNGN_RETURN_FROM_SWAMP,
      "Swamp", "the Swamp", "Swamp",
      NULL,
      BROWN, BROWN, mons_swamp_rare, mons_swamp_level, NULL, 
      0, 'S' },

    { BRANCH_SLIME_PITS, BRANCH_LAIR, 6, 4,
      DNGN_ENTER_SLIME_PITS, DNGN_RETURN_FROM_SLIME_PITS,
      "Slime Pits", "the Pits of Slime", "Slime",
      NULL,
      GREEN, LIGHTGREEN, mons_pitslime_rare, mons_pitslime_level, NULL,
      5, 'M' },

    { BRANCH_SNAKE_PIT, BRANCH_LAIR, 5, 7,
      DNGN_ENTER_SNAKE_PIT, DNGN_RETURN_FROM_SNAKE_PIT,
      "Snake Pit", "the Snake Pit", "Snake",
      NULL,
      LIGHTGREEN, YELLOW, mons_pitsnake_rare, mons_pitsnake_level, NULL,
      10, 'P' },

    { BRANCH_HIVE, BRANCH_MAIN_DUNGEON, 4, 15,
      DNGN_ENTER_HIVE, DNGN_RETURN_FROM_HIVE,
      "Hive", "the Hive", "Hive",
      "You hear a buzzing sound coming from all directions.",
      YELLOW, BROWN, mons_hive_rare, mons_hive_level, NULL, 
      0, 'H' },

    { BRANCH_VAULTS, BRANCH_MAIN_DUNGEON, 8, 17,
      DNGN_ENTER_VAULTS, DNGN_RETURN_FROM_VAULTS,
      "Vaults", "the Vaults", "Vault",
      NULL,
      LIGHTGREY, BROWN, mons_standard_rare, mons_standard_level, NULL,
      5, 'V' },


    { BRANCH_HALL_OF_BLADES, BRANCH_VAULTS, 1, 4,
      DNGN_ENTER_HALL_OF_BLADES, DNGN_RETURN_FROM_HALL_OF_BLADES,
      "Hall of Blades", "the Hall of Blades", "Blade",
      NULL,
      LIGHTGREY, LIGHTGREY, mons_hallblade_rare, mons_hallblade_level, NULL, 
      0, 'B' },

    { BRANCH_CRYPT, BRANCH_VAULTS, 5, 3,
      DNGN_ENTER_CRYPT, DNGN_RETURN_FROM_CRYPT,
      "Crypt", "the Crypt", "Crypt",
      NULL,
      LIGHTGREY, LIGHTGREY, mons_crypt_rare, mons_crypt_level, NULL,
      5, 'C' },

    { BRANCH_TOMB, BRANCH_CRYPT, 3, 5,
      DNGN_ENTER_TOMB, DNGN_RETURN_FROM_TOMB,
      "Tomb", "the Tomb of the Ancients", "Tomb",
      NULL,
      YELLOW, LIGHTGREY, mons_tomb_rare, mons_tomb_level, NULL, 
      0, 'G' },

    { BRANCH_VESTIBULE_OF_HELL, BRANCH_MAIN_DUNGEON, 1, -1,
      DNGN_ENTER_HELL, NUM_FEATURES, // sentinel
      "Hell", "The Vestibule of Hell", "Hell",
      NULL,
      LIGHTGREY, LIGHTGREY,
      mons_standard_rare, mons_standard_level, NULL,
      0, 'U'
    },

    { BRANCH_DIS, BRANCH_VESTIBULE_OF_HELL, 7, -1,
      DNGN_ENTER_DIS, NUM_FEATURES, // sentinel
      "Dis", "the Iron City of Dis", "Dis",
      NULL,
      CYAN, CYAN,
      mons_dis_rare, mons_dis_level, NULL,
      0, 'I'
    },

    { BRANCH_GEHENNA, BRANCH_VESTIBULE_OF_HELL, 7, -1,
      DNGN_ENTER_GEHENNA, NUM_FEATURES, // sentinel
      "Gehenna", "Gehenna", "Geh",
      NULL,
      DARKGREY, RED,
      mons_gehenna_rare, mons_gehenna_level, NULL,
      0, 'N'
    },

    { BRANCH_COCYTUS, BRANCH_VESTIBULE_OF_HELL, 7, -1,
      DNGN_ENTER_COCYTUS, NUM_FEATURES, // sentinel
      "Cocytus", "Cocytus", "Coc",
      NULL,
      LIGHTBLUE, LIGHTCYAN,
      mons_cocytus_rare, mons_cocytus_level, NULL,
      0, 'X'
    },

    { BRANCH_TARTARUS, BRANCH_VESTIBULE_OF_HELL, 7, -1,
      DNGN_ENTER_TARTARUS, NUM_FEATURES, // sentinel
      "Tartarus", "Tartarus", "Tar",
      NULL,
      DARKGREY, DARKGREY,
      mons_tartarus_rare, mons_tartarus_level, NULL,
      0, 'Y'
    },

    { BRANCH_INFERNO, BRANCH_MAIN_DUNGEON, -1, -1,
      NUM_FEATURES, NUM_FEATURES,
      NULL, NULL, NULL,
      NULL,
      BLACK, BLACK,
      NULL, NULL, NULL,
      0, 'R'
    },

    { BRANCH_THE_PIT, BRANCH_MAIN_DUNGEON, -1, -1,
      NUM_FEATURES, NUM_FEATURES,
      NULL, NULL, NULL,
      NULL,
      BLACK, BLACK,
      NULL, NULL, NULL,
      0, '0'
    },

    { BRANCH_HALL_OF_ZOT, BRANCH_MAIN_DUNGEON, 5, 27,
      DNGN_ENTER_ZOT, DNGN_RETURN_FROM_ZOT,
      "Zot", "the Realm of Zot", "Zot",
      NULL,
      BLACK, BLACK, mons_hallzot_rare, mons_hallzot_level, NULL,
      1, 'Z' },

    { BRANCH_CAVERNS, BRANCH_MAIN_DUNGEON, -1, -1,
      NUM_FEATURES, NUM_FEATURES,
      NULL, NULL, NULL,
      NULL,
      BLACK, BLACK,
      NULL, NULL, NULL,
      0, 0
    }
};
