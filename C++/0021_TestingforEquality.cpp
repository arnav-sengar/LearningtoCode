/*
    The == and != operators
        compares the values of 2 expressions
    
    Evaluates to a boolean (true or false, 1 or 0)

    Commonly used in control flow statements
        expr1 == expr2 

        expr1 != expr2

        100 == 200
        
        num1 != num2

        {
            bool result {false};
            
            result = (100 == 50+50);

            result = (num1 != num2);

            cout << (num1 == num2) << endl;
            cout << boolalpha;  // displays the results in true or false
            
            cout << (num1 == num2) << endl;
            cout << noboolalpha;  // displays the results in 0s and 1s
        }
*/

#include <iostream>

using namespace std;

int main() 
{
    bool equal_result {false};
    bool not_equal_result {false};

    int num1{},num2{};
    
    cout << "Enter 2 numbers seperated by spaces : ";
    cin >> num1 >> num2;

    equal_result = num1 == num2;
    not_equal_result = num1 != num2;

    cout << "Comparison results(equal) : " << equal_result << endl;
    cout << "Comparison results(not equal) : " << not_equal_result << endl;

    //to display the result in true/false instead of 0/1
    cout << boolalpha; 
    cout << "Comparison results(equal) : " << equal_result << endl;
    cout << "Comparison results(not equal) : " << not_equal_result << endl;

    return 0;
}