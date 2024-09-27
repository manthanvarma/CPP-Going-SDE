#include<iostream>
#include<string>
using namespace std;

int main() {
    string food = "pizza";
    string *ptr = &food;

    cout << food << endl;
    cout << &food << endl;
    cout << ptr << endl;   //reference
    cout << *ptr << endl;  //deference
}
