// Anne DeWulf 8/14/24
// doubleInt.cpp
// Made in 10 minutes

#include <thread>
#include "iostream"
using namespace std;



int main() {
    int userInt = 0;
    int doubleInt = 0;

    cout << "Please enter an number: ";
    cin >> userInt;

    doubleInt = userInt * 2;

    cout << "Your number is now: " << doubleInt << endl;

    return 0;
}
