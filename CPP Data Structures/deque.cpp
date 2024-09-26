#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<string> cars = {"Volvo", "BMW", "Mazda", "Pagani"};
    for (string car : cars) {
        cout << car << " ";
    }
    cout << endl;

    cout << cars[0] << endl;
    cout << cars[1] << endl;
    cout << cars.front() << endl;
    cout << cars.back() << endl;
    cout << cars.at(1) << endl;
    cout << cars.at(2) << endl;

    // changing the value

    cars[0] = "Opel";
    for (string car : cars) {
        cout << car << " ";
    }
    cout << endl;

    // adding elements from both sides

    cars.push_front("Tesla");
    cars.push_back("Volkswagen");

    for (string car : cars) {
        cout << car << " ";
    }
    cout << endl;

    // size of a deque

    cout << cars.size() << endl;

    // is deque empty

    cout << cars.empty() << endl;
}
