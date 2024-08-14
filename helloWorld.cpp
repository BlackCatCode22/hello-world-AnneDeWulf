//Anne DeWulf 8/14/24
// helloWorld.cpp
/*
 *Hi! My first C++ program of the class.
 *The class length was an hour, but I got bored fast after doing it.
 * Hope you enjoy my extra work!
*/

// apologies for the extension, I wanted to do something
//I also acknowledge that 'sleep_for' is probably not the best way to do a delay, and there's definitely a better system, this was just familiar for me
#include <thread>
#include "iostream"

using namespace std;
int i = 1;

int main()
{
    // here, I wanted to do some storytelling with Hello World, because I was bored
    if (i == 1){
    cout << "\n\n\nHello, World!\n\n" << endl;
        this_thread::sleep_for((chrono::seconds(2)));
        cout << "And the world said, 'Greetings.'" << endl;
        this_thread::sleep_for((chrono::seconds(2)));
        cout << "\n\n\nYou asked the world for it's name.\n\n" << endl;
        this_thread::sleep_for((chrono::seconds(2)));
        cout << "And the world said, 'I have no name.'"<< endl;
    return 0;
        } else //this was a test to see if variable 'if then' statements worked the same way in C++ as they do in Java. It does! This was also me breaking my code
    cout << "\n\n\nGoodbye, World!\n\n\n" << endl;
    return 1;
}
