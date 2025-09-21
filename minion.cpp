#include "minion.h"

int Minion::minionCount = 0;

// Constructor for Minion class
Minion::Minion(string name, float height, int eyes, int bananasOwned) {
    this->name = name;
    this->height = height;
    this->eyes = eyes;
    this->bananasOwned = bananasOwned;
    minionCount++;
}
// Getter functions for private
string Minion::getName() const {
    return name;
}

int Minion::getBananas() const {
    return bananasOwned;
}

// Static function for printing minion count
void Minion::printMinionCount() {
    cout << minionCount << " minions created." << endl;
}

// Operator Overloading to compare minion heights
//(member function overloading)
bool Minion::operator>(const Minion& other) const {
    return this->height > other.height;
} //overloaded function >

bool Minion::operator<(const Minion& other) const {
    return this->height < other.height;
} //overloaded function <

// Pre increment operator overloading
Minion& Minion::operator++() {
    bananasOwned++;
    return *this;
}

// Post increment operator overloading
Minion Minion::operator++(int) {
    Minion temp = *this;
    bananasOwned++;
    return temp;
}

// Insertion operator overloading
//(non-member function overloading)
ostream& operator<<(ostream& os, const Minion& m) {
    os << "The minion " << m.name << " is " << m.height
       << " inches tall, has " << m.eyes << " eye(s), and owns "
       << m.bananasOwned << " banana(s)." << endl;
    return os; 
}