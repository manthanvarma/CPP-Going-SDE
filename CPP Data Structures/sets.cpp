#include<iostream>
#include<set>
using namespace std;

int main() {
    set<string> cars = {"Volvo", "Porsche", "Alto", "BMW"};
    for (string car : cars) {
        cout << car << " ";
    }
    cout << endl;

    set<int> nums = {4,6,8,7,5,1,9,3,2};
    for (int num : nums) {
        cout << num <<  " ";
    }
    cout << endl;

    // to reverse a set

    set<int, greater<int>> numb = {1,7,8,9,3,2,4,6,5};
    for (int num : numb) {
        cout << num << " ";
    }
    cout << endl;

    // adding elements
    cars.insert("Mazda");
    cars.insert("Pagani");
    cars.insert("Bugatti");
    cars.insert("Maserati");

    for (string car : cars) {
        cout << car << " ";
    }
    cout << endl;

    // removing an element

    cars.erase("Mazda");
    cars.erase("Pagani");

    for (string car : cars) {
        cout << car << " ";
    }
    cout << endl;

    // removing all element

    cars.clear();

    // size of set
    set<string> car = {"Volvo", "Porsche", "Alto", "BMW"};
    cout << car.size() << endl; 

    // is set empty
    cout << car.empty() << endl;
}

