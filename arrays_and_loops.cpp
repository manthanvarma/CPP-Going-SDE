#include<iostream>
using namespace std;

int main() {
    int myNumbers[5] = {10,20,30,40,50};

    for (int i = 0; i<5; i++) {
        cout << myNumbers[i] << endl;
    }

    for (int i: myNumbers) {
        cout << i << endl;
    }

    string cars[4] = {"Volvo", "BMW", "Volkswagen", "Tesla"};
    
    for (int i = 0; i<4; i++) {
        cout << cars[i] << endl;
    }

    for (string i: cars) {
        cout << i << endl;
    }

}