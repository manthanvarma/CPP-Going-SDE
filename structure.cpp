#include<iostream>
#include<string>
using namespace std;

struct car {
    string brand;
    string model;
    int year;
};

int main() {
    car myCar1;
    car myCar2;

    myCar1.brand = "BMW";
    myCar1.model = "iX M60";
    myCar1.year = 2009;

    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1989;

    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << endl;
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << endl;
}
