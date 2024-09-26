#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout << "type 1st number" << endl;
    cin >> a;
    cout << "type 2nd number" << endl;
    cin >> b;
    cout << "type 3rd number" << endl;
    cin >> c;
    if (a>b && a>c) {
        cout << a << " is the larger" << endl;
    }
    else if (b>a && b>c) {
        cout << b << " is the larger" << endl;
    }
    else {
        cout << c << " is the larger" << endl;
    } 
}