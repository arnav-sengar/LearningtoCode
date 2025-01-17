/*
    Conditional Operator
        ? : 
    syntax
        (cond_expr) ? expr1 : expr2;

    cond_expr evaluates to a boolean expression

        if cond_expr is true then the value of expr1 is returned

        if cond_expr is false then the value of expr2 is returned

    Similar to if-else construct

    Ternary operator

    Very useful when used inline

    Very easy to abuse!!

    Eg:
        int a {10} , b{20};
        int score{92};
        int result{};

        result = (a > b) ? a : b;

        result = (a < b) ? (b-a) : (a-b);

        result = (b != 0) ? (a/b) : 0;

        cout << ((score > 90) ? "Excellent" : "Good");
*/

#include <iostream>

using namespace std;

int main()
{
    int num{0};

    cout << "Enter any integer : ";
    cin >> num;

    cout << "Using if-else constructs : " << endl;
    if(num % 2 == 0)
        cout << num << " is even!" << endl;
    else    
        cout << num << " is odd!" << endl;
    
    cout << "Using conditional operator : " << endl;
    cout << num << " is " << ((num % 2 ==0) ? "even!" : "odd!") << endl;
    
    int num1{0} , num2{0};

    cout << "Enter any two integers : ";
    cin >> num1 >> num2;

    if(num1 == num2)
    {
        cout << "The numbers are same!" << endl;
    }
    else
    {
        cout << "Larger : " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smaller : " << ((num1 < num2) ? num1 : num2) << endl;
    }
}