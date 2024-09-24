#include<iostream>
using namespace std;

int main() {
    string cars[4] = {"Volvo", "BMW", "Volkswagen", "Tesla"};
    cout << cars[0] << endl;
    cout << cars[2] << endl;

    for (int i=0; i<4; i++) {
        cout << cars[i] << endl;
    }
}
