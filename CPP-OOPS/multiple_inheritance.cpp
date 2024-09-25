#include<iostream>
using namespace std;

class Father {
    public:
        void fatherFunction() {
            cout << "Father: How was your day kiddo?" << endl;
        }
};

class Mother {
    public:
        void motherFunction() {
            cout << "Mother: Did you finish your homework?" << endl;
        }
};

class Child: public Father, public Mother {
    public:
        void childFunction() {
            cout << "Child: My day was good, and yes i finished the homework. Now I'm gonna play football." << endl;
        }
};

int main() {
    Child myObj;
    myObj.fatherFunction();
    myObj.motherFunction();
    myObj.childFunction();

    return 0;
}