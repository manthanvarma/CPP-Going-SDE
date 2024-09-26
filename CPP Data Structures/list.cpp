#include<iostream>
#include<list>
using namespace std;

int main() {
    list<string> fruits = {"apple", "banana", "kiwi"};

    for (string fruit : fruits) {
        cout << fruit << " ";
    }

    cout << endl;

    cout << fruits.front() << endl; // first element
    cout << fruits.back() << endl; // last element

    // changing list element

    fruits.front() = "chickoo";
    fruits.back() = "strawberry";

    for (string fruit : fruits) {
        cout << fruit << " ";
    }

    cout << endl;

    // add an element at beginning and end
    fruits.push_front("apple");
    fruits.push_back("kiwi");

    for (string fruit : fruits) {
        cout << fruit << " ";
    }

    cout << endl;

    // remove an element from beginning and end
    fruits.pop_front();
    fruits.pop_back();

    for (string fruit : fruits) {
        cout << fruit << " ";
    }

    cout << endl;

    // list size
    cout << fruits.size() << endl;

    // is list empty
    cout << fruits.empty() << endl;
}
