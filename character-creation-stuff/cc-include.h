#ifndef CC_INCLUDE
#define CC_INCLUDE


#include<string>

/****
CharacterAttributes holds the values pertaining to the character themself. Includes variables for age, height, build, and experience/levels. 

As opposed to determining sex and gender at the beginning, experimenting with an integer scale for physical and social appearances. How these will be affected will be determined at a later point in development. 

Needs research to determine what player behavioral choices should contribute to moving social scale one way or another.
****/
struct CharacterAttributes{

        std::string chName;
        int chAge;
        int chHeight;
        int intPhysicalApp = 0; //holds value for physical appearance scale. -50 to 50, masculine to feminine. -20 to +20 is androgynous, -21 to -50 is masculine, +21 - +50 is feminine.
        int intSocialApp = 0; //holds value for social appearance scale. -50 to 50, masculine to feminine. -20 to +20 is androgynous, -21 to -50 is masculine, +21 - +50 is feminine.
        std::string chBuild = "athletic";
        int chLevel = 0;
        int chEXP = 0;
        };
struct ItemInfo{

        std::string itemName;
        std::string itemDesc;
        int itemValue;
        int itemDamage;
        int itemWeight;

        };
struct Stats{
        int strg = 5;
        int prcptn = 5;
        int end = 5;
        int intgl = 5;
        int agl = 5;
        int lck = 5;
        int magic = 5;
        };


CharacterAttributes basicInformation(CharacterAttributes);
ItemInfo startingArmor(ItemInfo);
ItemInfo startingWeapons(ItemInfo);
Stats playerStats(Stats);
#endif
