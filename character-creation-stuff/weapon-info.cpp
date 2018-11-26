//header files

#include<iostream>
#include<cstdlib>

ItemInfo startingWeapon(ItemInfo ii_playerWeapon)
{

ItemInfo ii_SteelSwd = {};
ItemInfo ii_Rapier = {};
ItemInfo ii_warHammer = {};
ItemInfo ii_dagger = {};


//Info for Steel Sword;

ii_oldSteelSwd.itemName = "steel sword";
ii_oldSteelSwd.itemDesc = "An old steel sword. Speckled with rust here and there. A bit heavy.";
ii_oldSteelSwd.itemValue = 25;
ii_oldSteelSwd.itemDamage = 11;
ii_oldSteelSwd.itemWeight = 12;

//Info for Rapier

ii_Rapier.itemName = "rapier";
ii_Rapier.itemDesc = "An antique rapier from a noble estate. Probably stolen. Lightweight, and takes considerable skill to use.";
ii_Rapier.itemValue = 28;
ii_Rapier.itemDamage = 9;
ii_Rapier.itemWeight = 8;

//Info for Warhammer

ii_oldSteelSwd.itemName = "war hammer";
ii_oldSteelSwd.itemDesc = "A standard-issue war hammer. One-handed, meant for combat on foot or on horseback. Excellent for cracking skulls due to its weight; also difficult to control.";
ii_oldSteelSwd.itemValue = 26;
ii_oldSteelSwd.itemDamage = 30;
ii_oldSteelSwd.itemWeight = 25;

//Info for dagger

ii_dagger.itemName = "dagger";
ii_dagger.itemDesc = "A long thrusting dagger, more accurately called a dirk. Lightweight. Capable of killing the unsuspecting, but more difficult to use in open combat against those more well armed.";
ii_dagger.itemValue = 10;
ii_dagger.itemDamage = 7;
ii_dagger.itemWeight = 4;

return ii_playerWeapon;
}
