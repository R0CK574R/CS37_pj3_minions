#ifndef MINION_H
#define MINION_H

#include <iostream>
#include <string>

using namespace std;

class Minion {
private:
    string name;
    float height;
    int eyes;
    int bananasOwned;

    static int minionCount;

public:
    // Constructor
    Minion(string name, float height, int eyes, int bananasOwned);

    // Two Getter functions, both constant
    string getName() const; //get name of the minion
    int getBananas() const; //get number of bananas the minion has

    // Static function
    static void printMinionCount();

    // Operator Overloading
    //(member function overloading)
    bool operator>(const Minion& other) const; //overloaded function >
    bool operator<(const Minion& other) const; //overloaded function <

    // Pre increment
    Minion& operator++();      

    // Post increment
    Minion operator++(int);    

    // Friend for insertion operator (non member function overloading)
    friend ostream& operator<<(ostream& os, const Minion& m);
};

#endif