#include<iostream>
using namespace std;

class Animal {
    public:
        void animalSound() {
            cout << "The animal makes a sound" << endl;
        }
};

class Cat : public Animal {
    public:
        void animalSound() {
            cout << "The cat says: Meow Meow." << endl;
        }
};

class Dog : public Animal {
    public:
        void animalSound() {
            cout << "The dog says: Bow Bow." << endl;
        }
};

int main() {
    Animal myAnimal;
    Cat myCat;
    Dog myDog;

    myAnimal.animalSound();
    myCat.animalSound();
    myDog.animalSound();

    return 0;
}