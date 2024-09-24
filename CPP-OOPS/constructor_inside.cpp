#include<iostream>
using namespace std;

class Car {
    public:
    string brand;
    string model;
    int year;
    Car (string x, string y, int z) { // constructor with parameters
        brand = x;
        model = y;
        year = z;
    }
};

int main() {
    Car carObj1("BMW", "X5", 2002);
    Car carObj2("Carrera", "GT", 2004);

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
}
