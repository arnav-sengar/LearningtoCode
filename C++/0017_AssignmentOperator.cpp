/*
    Assignment operator (=)
        lhs = rhs
    
    rhs is an expression that is evaluated to a value

    the value of rhs is stored to the lhs

    the value of the rhs must be compatible with the lhs

    the lhs must be assignable

    assignment expression is evaluated to what was just assigned

    more than one varialbe can be assigned in a single statement
*/

#include <iostream>

using namespace std;

int main() 
{
    int num1 {10};
    int num2 {20};
    const int num3 {30};

    num1 = 100;
    //rhs mein kuch bhi ho sakta h....it can be any constant value
    //ya koi bohot bada expression
    //jo compiler evaluate karega and
    //lhs mein le jaake store kar dega
    //bas rhs ki value should be compatible with the data type of lhs

    num1 = num2 = 100;
    //hum log consequently bhi values assigne kar sakte h
    //assignment operator is evaluated from 
    //  left to right
    //that means.....
    //first num2 was assigned 100
    //and then num1 was assigned 100

    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    //num1 = "Arnav";
    //this will throw error of conversion issue

    //num3 = 1000;
    //assignment to read-only variable is not allowed

    //100 = num1;
    //lvalue required as left operand of assignment

    return 0;
}