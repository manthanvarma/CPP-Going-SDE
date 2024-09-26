#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<string> cars;
    
    // pushing elements
    
    cars.push("Tesla");
    cars.push("Tata");
    cars.push("Mercedes");
    cars.push("Porsche");

    cout << cars.top() << endl;

    // changing an element

    cars.top() = "Tesla";
    cout << cars.top() << endl;

    // popping an element
    cars.pop();
    cout << cars.top() << endl;

    // size of stack
    cout << cars.size() << endl;

    // is stack empty
    cout << cars.empty() << endl;

    // we can print the elements by popping them from stack

    while (!cars.empty()) {
        cout << cars.top() << " ";
        cars.pop();
    }
}
