//Header
#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;
//Global Variables

/****
CharacterAttributes holds the values pertaining to the character themself. Includes variables for age, height, build, and experience/levels. 

As opposed to determining sex and gender at the beginning, experimenting with an integer scale for physical and social appearances. How these will be affected will be determined at a later point in development. 

Needs research to determine what player behavioral choices should contribute to moving social scale one way or another.
****/
struct CharacterAttributes{

        string chName;
        int chAge;
        int chHeight;
        int intPhysicalApp = 0; //holds value for physical appearance scale. -50 to 50, masculine to feminine. -20 to +20 is androgynous, -21 to -50 is masculine, +21 - +50 is feminine.
        int intSocialApp = 0; //holds value for social appearance scale. -50 to 50, masculine to feminine. -20 to +20 is androgynous, -21 to -50 is masculine, +21 - +50 is feminine.
        string chBuild = "athletic";
        int chLevel = 0;
        int chEXP = 0;
        };
struct WeaponInfo{

        string wpnName;
        string wpnDesc;
        double wpnValue;
        double wpnDamage;
        double wpnWeight;

        };
struct Stats{
        int strength;
        int perception;
        int endurance;
        int intelligence;
        int agility;
        int luck;
        int magic;
        };

string SCREENCLEAR (30, '\n'); //included to clear the screen after a menu function has been completed.

//Function Prototypes
CharacterAttributes basicInformation(CharacterAttributes);

int main()
{

    CharacterAttributes ca_playerCharacter; //Holds Basic Character Information
    WeaponInfo wi_playerWeapon; // Holds weapon information
    Stats st_playerStats;   //Holds player stats
    string str_playerLocation;  //holds player location
    
    int intMenuSelection = -1;
     //initializes the menu
    do{           
        cout << "========================" << endl;
        cout << "CHARACTER CREATION MENU" << endl;
        cout << "========================" << endl;
        
        cout << endl << endl << endl;
        cout << "[1] Basic Character Information" << endl;
        cout << "[2] Character Stats" << endl;
        cout << "[3] Character Equipment" << endl;
        cout << "[4] Starting Location" << endl;
        cout << "[5] View Character Sheet" << endl;
        cout << "[0] Exit Program" << endl << endl;
        
        cout << "Please make a selection: ";
        cin >> intMenuSelection;
        
        if(intMenuSelection == 1)
        {   
            cout << endl << endl << endl;
            ca_playerCharacter = basicInformation(ca_playerCharacter);
            cout << SCREENCLEAR;
        }
        else if (intMenuSelection != 1 && intMenuSelection != 0)
        {
            cin.ignore();
            cout << endl << "This is an unimplemented feature at this time. Check back for updates." << endl << endl;
            cin.get();
            cout << SCREENCLEAR;
        }
        
    }while(intMenuSelection != 0 );
    
    return 0;       
}

//Function Definitions

CharacterAttributes basicInformation(CharacterAttributes ca_playerinfo)
{
    char confirmation = 'n';
    int intBuildSelect = -1;
    while (confirmation == 'n' || confirmation == 'N')
    {
    cout << endl << "Name: ";
    cin >> ca_playerinfo.chName;
    cout << endl << "Age: ";
    cin >> ca_playerinfo.chAge;
    cout << endl << "Height (in inches): ";
    cin >> ca_playerinfo.chHeight;
   
    while (intBuildSelect > 6 || intBuildSelect < 1){
    cout << "What kind of build do you have?";
    cout << endl << "[1] Lithe";
    cout << endl << "[2] Thin";
    cout << endl << "[3] Average";
    cout << endl << "[4] Chubby";
    cout << endl << "[5] Toned";
    cout << endl << "[6] Athletic";
    cout << endl << "Select an option (default [3]): ";
    cin >> intBuildSelect;
    
    if (intBuildSelect == 1)
        ca_playerinfo.chBuild = "lithe";
    else if (intBuildSelect == 2)
        ca_playerinfo.chBuild = "thin";
    else if (intBuildSelect == 3)
        ca_playerinfo.chBuild = "average";
    else if (intBuildSelect == 4)
        ca_playerinfo.chBuild = "chubby";
    else if (intBuildSelect == 5)
        ca_playerinfo.chBuild = "toned";
    else if (intBuildSelect == 6)
        ca_playerinfo.chBuild = "athletic";
    else
        cout << endl << "That is not a valid selection. Please try again." << endl << endl;
    };

    cout << "Is this information correct? (Y/N) ";
    cin >> confirmation;
    cout << endl << endl;
    }
    
    return ca_playerinfo;
}



