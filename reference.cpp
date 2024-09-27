#include<iostream>
#include <string>
using namespace std;

int main() {
    string food = "apple";
    string &meal = food;

    cout << food << endl;
    cout << meal << endl;

    // to check memory address

    string car = "ferrari";
    cout << &car << endl;
}


