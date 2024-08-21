// Anne DeWulf 8/21/24
// userGreeting.cpp
// Made in 10 minutes, with a user input and a function usage.

#include <thread>
#include "iostream"
using namespace std;

string userName;

void sayHello() {
    cout << "Greetings, " << userName << "." << endl;
}

int main() {
    cout << "Please enter your name: ";
    cin >> userName;

    sayHello();


    return 0;
}
