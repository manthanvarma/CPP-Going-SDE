#include<vector>
#include<iostream>
using namespace std;

int main() {
    vector<string> cars = {"Volvo", "BMW", "Ford", "Maruti Suzuki"};
    for (string car : cars) {
        cout << car << endl;
    }

    cout << cars[0] << endl;
    cout << cars[1] << endl;
    cout << cars.front() << endl;
    cout << cars.back() << endl;
    cout << cars.at(1) << endl;
    cout << cars.at(2) << endl;

    // changing an element

    cars.at(0) = "Opel";
    cout << cars.at(0) << endl;

    // adding an element

    cars.push_back("Tesla");
    cars.push_back("Mazda");
    cars.push_back("Skoda");
    cars.push_back("Mitsubishi");

    for (string car : cars) {
        cout << car << " ";
    }
    cout << endl;

    // removing an element

    cars.pop_back();

    for (string car : cars) {
        cout << car << " ";
    }
    cout << endl;

    // vector size

    int a = cars.size();
    cout << a << endl;

    // is vector empty;

    cout << cars.empty();

    return 0;
}
