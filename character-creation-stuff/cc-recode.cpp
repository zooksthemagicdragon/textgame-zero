//Header
#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <fstream>
#include "cc-include.h"
using namespace std;

string SCREENCLEAR (30, '\n'); //included to clear the screen after a menu function has been completed.

//Function Prototypes

int main()
{

    CharacterAttributes ca_playerCharacter; //Holds Basic Character Information
    ItemInfo ii_playerWeapon; // Holds weapon information
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



