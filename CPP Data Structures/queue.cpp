#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<string> cars;

    // adding elements
    cars.push("Ford");
    cars.push("Tesla");
    cars.push("Mercedes");
    cars.push("Tata");

    // accessing first and last elements
    cout << cars.front() << endl;
    cout << cars.back() << endl;

    // changing front and back elements
    cars.front() = "Pagani";
    cars.back() = "Bugatti";
    cout << cars.front() << endl;
    cout << cars.back() << endl;

    // popping element
    cars.pop();
    cout << cars.front() << endl;

    // size of queue
    cout << cars.size() << endl;

    // is queue empty
    cout << cars.empty() << endl;

    while(!cars.empty()) {
        cout << cars.front() << " ";
        cars.pop();
    }
}