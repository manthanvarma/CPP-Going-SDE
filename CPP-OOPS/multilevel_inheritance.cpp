#include<iostream>
using namespace std;

class myClass {
    public:
        void myFunction() {
            cout << "Parent: How was your day today?" << endl;
        }
};

class myChild: public myClass {
    public:
        void myFunction() {
            cout << "Child: My day was good, just a bit busy." << endl;
        }
};

class myGrandChild: public myChild {
    public:
        void myFunction() {
            cout << "Grandchild: Same here, lots of homework." << endl;
        }
};

int main() {
    myClass parentObj;
    parentObj.myFunction();

    myChild childObj;
    childObj.myFunction();
    
    myGrandChild grandChildObj;
    grandChildObj.myFunction();
    
    return 0;
}