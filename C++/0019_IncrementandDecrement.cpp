/*
    Increment operator ++
    Decrement operator --

    increments or decrements the value of the operand by 1

    prefix   ++/--num
    postfix  ++/--num

    Don't overuse this operator!!
    ALERT!!! Never use it twice for the same variable in the same statement
*/
#include <iostream>

using namespace std;

int main() 
{

    int counter{10};
    int results{0};

    //Example 1 - simple statement
    cout << "Counter :" << counter << endl;
    cout << "------------------------" << endl;
    counter = counter + 1;
    cout << "Counter :" << counter << endl;
    cout << "------------------------" << endl;
    counter++;
    cout << "Counter :" << counter << endl;

    ++counter;
    cout << "Counter :" << counter << endl;
    cout << "------------------------" << endl;

    counter = 10;
    results = 0;

    cout << "Counter :" << counter << endl;

    results = ++counter;
    //assign the value after changing
    cout << "Counter :" << counter << endl;
    cout << "Results :" << results << endl;
    cout << "------------------------" << endl;

    counter = 10;
    results = 0;
    cout << "Counter :" << counter << endl;
    results = counter--;
    //assign the value before changing
    cout << "Counter :" << counter << endl;
    cout << "Results :" << results << endl;
    cout << "------------------------" << endl;

    counter = 10;
    results = 0;

    cout << "Counter :" << counter << endl;
    
    results = ++counter + 10;
    //first change the value of counter to +1 and then add 10 to it
    //then store the total result in results
    cout << "Counter :" << counter << endl;
    cout << "Results :" << results << endl;
    cout << "------------------------" << endl;

    counter = 10;
    results = 0;
    
    cout << "Counter :" << counter << endl;

    results = counter++ + 10;
    //first add the value to 10 and store it in results
    //then change the value of counter
    cout << "Counter :" << counter << endl;
    cout << "Results :" << results << endl;
    cout << "------------------------" << endl;

    return 0;
}   