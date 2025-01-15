#include <iostream>

using namespace std;

int main() 
{
    int num1 {200};
    int num2 {100};

    cout << "num1 + num2 = " << num1+num2 << endl;

    int result {0};
    
    result = num1 + num2;
    cout << num1 << "+" << num2 << " = " << result << endl;

    result = num1 - num2;
    cout << num1 << "-" << num2 << " = " << result << endl;
    
    result = num1 * num2;
    cout << num1 << "*" << num2 << " = " << result << endl;
    
    result = num1 / num2;
    cout << num1 << "/" << num2 << " = " << result << endl;

    result = num2 / num1;
    cout << num2 << "/" << num1 << " = " << result << endl;
    //this will give output as 0 as we are doing integer division
    //and it will consider only the integer part of the result
    //so from 0.5 only 0 will be considered

    num1 = 10;
    num2 = 3;

    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;    

    const double usd_per__euro {1.19};
    
    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR : ";
    double euros{0.0};
    cin >> euros;
    double dollars{0.0};

    dollars = euros * usd_per__euro;
    
    cout << euros << " is equivalent to " << dollars << " dollars" << endl;

    return 0;
}