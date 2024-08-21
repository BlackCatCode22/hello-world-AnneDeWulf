// Anne DeWulf 8/21/24
// findLargestOfThree.cpp
// Made in 5 minutes, with inputs

#include <thread>
#include "iostream"
using namespace std;
int answer = 0;
int i = 0;
int j = 0;
int k = 0;

int main() {

  // Inputs I added to make this more fun.

    cout << "Please enter the first number: ";
    cin >> i;

    cout << "Please enter the second number: ";
    cin >> j;

    cout << "Please enter the third number: ";
    cin >> k;

    // Simple if statements that shuffle between the three results.

    answer = i;
    if (j > answer)
        answer = j;
    if (k > answer)
        answer = k;

    cout << "The largest number is: " << answer << endl;

    return 0;
}
