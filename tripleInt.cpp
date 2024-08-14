// Anne DeWulf 8/14/24
// tripleInt.cpp
// Made in 10 minutes

#include <thread>
#include "iostream"
using namespace std;



int main() {
    int userInt = 0;
    int tripleInt = 0;

    cout << "Please enter an number: ";
    cin >> userInt;

    tripleInt = userInt * 3;

    cout << "Your number is now: " << tripleInt << endl;

    return 0;
}
