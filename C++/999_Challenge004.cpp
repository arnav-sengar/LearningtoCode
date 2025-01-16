/*
For this program we will be using the US dollars and cents

Write a program that asks the user to enter the following:
    An integer representing the number of cents

You may assume that the number of cents entered is greater than or equal to zero.

The program should then display how to providee that change to the user.

In the US :
    1 dollar is 100 cents
    1 quarter is 25 cents
    1 dime is 10 cents
    1 nickel is 5 cents and
    1 penny is 1 cent

Output :
    Enter the number of cents you have : n
    You can provide change for this change as follows:
        dollars : 
        quarters :
        dime : 
        nickel : 
        penny :
*/

#include <iostream>

using namespace std;

int main()
{
    int dollars{0};
    int quarters{0};
    int dime{0};
    int nickel{0};
    int penny{0};

    int cents{0};
    cout << "Enter the number of cents you have : ";
    cin >> cents;

    if(cents >= 100)
    {
        dollars = cents/100;
        cents %= 100;
    }
    if(cents >= 25)
    {
        quarters = cents/25;
        cents %= 25;
    }
    if(cents >= 10)
    {
        dime = cents/10;
        cents %= 10;
    }
    if(cents >= 5)
    {
        nickel = cents/5;
        cents %= 5;
    }
    if(cents >= 0 || cents < 5)
    {
        penny = cents;
    }
    cout << "You can provide the change for this change as follows : " << endl;
    cout << "\t Dollars : " << dollars << endl;
    cout << "\t Quarters : " << dollars << endl;
    cout << "\t Dime : " << dime << endl;
    cout << "\t Nickel : " << nickel << endl;
    cout << "\t Penny : " << penny << endl;
}