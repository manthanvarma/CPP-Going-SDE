#include <iostream>
using namespace std;

bool Even(int n) {
    return (n%2 == 0);
}

int main() {
    int n;
    cout << "enter number";
    cin >> n;

    if (Even(n) == true) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }
}