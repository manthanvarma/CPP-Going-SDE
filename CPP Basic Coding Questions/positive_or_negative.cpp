#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "enter a number" << endl;
    cin >> num;
    if (num>=0) {
        cout << num << " is a positive number" << endl;
    }
    else {
        cout << num << " is a negative number" << endl;
    }
}