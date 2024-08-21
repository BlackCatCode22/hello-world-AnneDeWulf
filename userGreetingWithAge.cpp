// Anne DeWulf 8/21/24
// userGreetingWithAge.cpp
// Made in ~10 minutes. Got inspired by the video we watched and just wanted to detail the user Greeting more, I suppose.

#include <thread>
#include "iostream"
using namespace std;

string userName;
string age;


void sayHello() {
    cout << "Greetings, " << userName << ". " << "Your age is " << age << "." << endl;
}
void informAboutOther(string otherName, int otherAge) {
    cout << "A person in the world's name is: " << otherName << ". " << "That person's age is " << otherAge << "." << endl;
}

int main() {
    cout << "Please enter your name: ";
    cin >> userName;
    cout << "Please enter your age: ";
    cin >> age;

    sayHello();
    informAboutOther("John", 54);


    return 0;
}
