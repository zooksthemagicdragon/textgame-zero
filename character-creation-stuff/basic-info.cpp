#include <iostream>
#include "cc-include.h"
using namespace std;
//Header Files and namespace std^

CharacterAttributes basicInformation(CharacterAttributes ca_playerinfo)
{
    char confirmation = 'n'; 
    int intBuildSelect = -1; //initialization for the BuildSelect integer
    while (confirmation == 'n' || confirmation == 'N') //simple char check for confirmation
    {
    cout << endl << "Name: ";
    cin >> ca_playerinfo.chName;
    cout << endl << "Age: ";
    cin >> ca_playerinfo.chAge;
    cout << endl << "Height (in inches): ";
    cin >> ca_playerinfo.chHeight;
   
    while (intBuildSelect > 6 || intBuildSelect < 1){ //BuildSelect loop. Currently six options available. Defaults to average.
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
    else if (intBuildSelect == -1)
        ca_playerinfo.chBuild = "average";
    else 
        cout << endl << "That is not a valid selection. Please try again." << endl << endl;
    };

    cout << "Is this information correct? (Y/N) ";
    cin >> confirmation;
    cout << endl << endl;
    }
    
    return ca_playerinfo;
}
