#include<iostream>
using namespace std;

class myClass {
    public:
        int x;
    private:
        int y;
};

int main() {
    myClass myObj;
    myObj.x = 25;
    myObj.y = 20;
    return 0;
}