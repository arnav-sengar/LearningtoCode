/*
    Mixed Type Expressions
    ---------------------
        C++ operations occur on same type of operands

        if operands are of different types, C++ will convert one

        IMPORTANT!! since it could affect calculations results

        C++ will attempt to automatically convert types(coercion)
            if it can't, a compiler error will occur.

    Conversions
    ----------------------
        Higher v/s Lower types are based on the size of the values the type can hold
            long double, double, float, unsigned long, long, unsigned int, int
            short and char types are always converted to int.
        
        Type coercion : conversion of one operand to another data type

        Promotion : conversion to a higher type
            used in mathematical expressions
        
        Demotion : conversion to a lower type
            used with assignment to lower type
*/

/*
    Ask the user to enter 3 integer
    Calculate the sum of the integers then
    Calculate the average of the 3 integers

    Display the 3 integers and 
    the average of the 3 integers
*/
#include <iostream>

using namespace std;

int main()
{
    int num1{},num2{},num3{};

    cout << "Enter 3 integers seperated by spaces : " ;
    cin >> num1 >> num2 >> num3;

    int count {3};

    int total{0};
    total = num1 + num2 + num3;

    double average {0.0};
    average = static_cast <double> (total)/count;
    //average = (double) total/count;
    //old style
    
    cout << "The 3 integers are : " << num1 << " " << num2 << " " << num3 << endl;
    cout << "The average of the 3 integers is : " << average << endl;

    return 0;
}