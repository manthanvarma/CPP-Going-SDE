#include<iostream>
using namespace std;

class Character {
    public:
        string fName = "Kabir";
        void dialogue() {
            cout << "Vada Vau Vau, Vada Vau Vau" << endl;
        }
};

// Derived Class 

class Angry: public Character {
    public:
        string lName = "Singh"; 
};

int main() {
    Angry myObj;
    myObj.dialogue();
    cout << myObj.fName + " " + myObj.lName << endl;
}