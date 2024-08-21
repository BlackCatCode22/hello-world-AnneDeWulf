// Anne DeWulf 8/21/24
// doubleIntVar.cpp
// Made in 10 minutes

#include <thread>
#include "iostream"
using namespace std;
int userInt = 0;
int doubleInt = 0;

void doubleTheInt() {
    cout << "Please enter an number: ";
    cin >> userInt;

    doubleInt = userInt * 2;
}

int main() {

    doubleTheInt();

    cout << "Your number is now: " << doubleInt << endl;

    return 0;
}
