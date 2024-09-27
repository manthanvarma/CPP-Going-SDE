#include<iostream>
#include<map>
using namespace std;

int main() {
    map<string, int> people = {{"John", 32}, {"Clarence", 28}, {"Harry", 45}};
    
    cout << "John is: " << people["John"] << endl;
    cout << "Clarence is: " << people["Clarence"] << endl;

    // changing value

    people["John"] = 50;
    cout << "John is: " << people["John"] << endl;

    // adding new elements

    people["Jenny"] = 24;
    people["Johnny"] = 24;
    people["Parv"] = 24;
    people["Naman"] = 24;

    for(auto &person: people) {
        cout << person.first << " is: " << person.second << endl;
    }    

    // removing an element

    people.erase("Jenny");

    // size of map

    cout << people.size() << endl;

    // is map empty

    cout << people.empty() << endl;
}
