#include<iostream>
#include<string>
using namespace std;

int main() {
    string company = "Dominoes";
    string *ptr = &company;

    cout << company << endl;
    cout << &company << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    // changing pointer value

    *ptr = "McDonalds";
    cout << *ptr << endl;
    cout << company << endl;
}
