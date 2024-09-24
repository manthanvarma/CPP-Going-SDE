#include <iostream>
using namespace std;

class car {
    public:
        int speed(int maxSpeed);
};

int car::speed(int maxSpeed) {
    return maxSpeed;
}

int main() {
    car myObj;
    int userSpeed;

    cout << "Enter speed of car in km/h: ";  // Added a colon and space for clarity
    cin >> userSpeed;

    if (cin.fail()) {
        cout << "Invalid input. Please enter a numeric value." << endl;
        return 1;  // Exit with an error code
    }

    cout << "The speed of the car is: " << myObj.speed(userSpeed) << " km/h" << endl;  // Added units to output

    return 0;
}
