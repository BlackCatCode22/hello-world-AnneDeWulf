// Anne DeWulf 8/21/24
// sumTwoInts.cpp
// Made in 5 minutes

#include <thread>
#include "iostream"
using namespace std;



int main() {
    int userInt1 = 0;
    int userInt2 = 0;
    int endInt = 0;

    cout << "Please enter an number: ";
    cin >> userInt1;

    cout << "Please enter another number: ";
    cin >> userInt2;

    endInt = userInt1 + userInt2;

    cout << "The value is: " << endInt << endl;

    return 0;
}
