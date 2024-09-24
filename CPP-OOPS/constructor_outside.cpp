#include<iostream>
using namespace std;

class Car {
    public:
        string brand;
        string model;
        int year;
        Car(string x, string y, int z);
};

Car::Car(string x, string y, int z) {
    brand = x;
    model = y;
    year = z;
}

int main() {
    Car carObj1("BMW", "X5", 2002);
    Car carObj2("Pagani", "Zonda", 1982);

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
}    