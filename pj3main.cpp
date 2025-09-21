#include <fstream>
#include <iostream>
#include "minion.h"

using namespace std;

int main() {
    //read the file
    string minionsFileName = "minions.txt";
    ifstream minionsFile(minionsFileName);

    //check if the file fails to open
    if (minionsFile.fail()) {
        cout << "File failed to open." << endl;
        return 0;
    }
    
    //4 private attributes
    string name; //name of the minion
    float height; //height of the minion
    int eyes, bananas; //number of eyes and bananas the minion has

    // Create the Minions
    minionsFile >> name >> height >> eyes >> bananas; //create minion1
    const Minion minion1(name, height, eyes, bananas);

    minionsFile >> name >> height >> eyes >> bananas; //create minion2
    Minion minion2(name, height, eyes, bananas);

    minionsFile >> name >> height >> eyes >> bananas; //create minion3
    Minion minion3(name, height, eyes, bananas);

    minionsFile.close(); //close the file

    // 1. Compare the height of the minions
    if (minion1 > minion2) {
        cout << minion1.getName() << " is taller than " << minion2.getName() << endl;
    }
    if (minion2 < minion3) {
        cout << minion3.getName() << " is taller than " << minion2.getName() << endl;
    }

    cout << endl;

    // 2. Minion2 gets the bananas
    cout << minion2;
    cout << minion2.getName() << " getting bananas.\n";
    cout << "The minion now has " << (++(++minion2)).getBananas() << " banana(s).\n" << endl;

    // 3. Minion3 gets the bananas
    cout << minion3;
    cout << minion3.getName() << " getting bananas.\n";
    cout << "Before getting bananas, the minion had " << minion3++.getBananas() << " banana(s).\n";
    cout << "After getting bananas, the minion has " << minion3.getBananas() << " banana(s).\n" << endl;

    // 4. Print out the total count
    Minion::printMinionCount();

    return 0;
}