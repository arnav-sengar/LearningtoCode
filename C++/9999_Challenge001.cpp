// Create a C++ program that ask the user for their favourite number between 1 and 100, then read this number from the console.Then display the following to the console:
// Amazing! That's my favourite number too!
// No really!! 'n' is my favourite number!
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter any number between 1 and 100" << endl;
    cin >> n;
    if(n<1 || n>100)
    {
        cout << "Please Choose a number in range" << endl;
    }
    else
    {
        cout << "Amazing! That's my favourite number too!" << endl;
        cout << "No really!! " <<  n <<  " is my favourite number!" << endl;
    }
    return 0;
}