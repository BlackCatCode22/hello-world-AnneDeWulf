// Anne DeWulf 8/21/24
// cubeAnIntFunct.cpp
// Made in 2 minutes, with inputs & functions

#include <thread>
#include "iostream"
using namespace std;
int cubedNum = 0;
int nonCubedNum = 0;

void getNumber() {
    cout << "Please enter the number: ";
    cin >> nonCubedNum;
    }

    void getAnswers() {
    cubedNum = nonCubedNum * nonCubedNum * nonCubedNum;
    }

int main() {
  getNumber();
  getAnswers();

    cout << "The cubed number is: " << cubedNum << endl;

    return 0;
}
