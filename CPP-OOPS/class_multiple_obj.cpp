#include<iostream>
#include<string>
using namespace std;

class car {
    public:
        string brand;
        string model;
        int year;
};

int main() {
    car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 2002;

    car carObj2;
    carObj2.brand = "Bugatti";
    carObj2.model = "Cheron";
    carObj2.year = 2010;

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
}
