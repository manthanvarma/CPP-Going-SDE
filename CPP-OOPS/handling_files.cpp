#include<iostream>
#include<fstream>
using namespace std;

int main() {
    
    // creating file

    ofstream MyFile("test.txt");
    MyFile << "Files can be tricky";
    MyFile.close();
}
