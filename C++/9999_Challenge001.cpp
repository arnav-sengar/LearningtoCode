// Create a C++ program that ask the user for their favourite number between 1 and 100, then read this number from the console.Then display the following to the console:
// Amazing! That's my favourite number too!
// No really!! 'n' is my favourite number!
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter any number between 1 and 100" << endl;
    cin >> n;
    cout << "Amazing! That's my favourite number too!" << endl;
    cout << "No really!! " <<  n <<  " is my favourite number!" << endl;
    return 0;
}