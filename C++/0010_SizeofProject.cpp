#include <iostream>
#include <climits>
//make sure you include climits for integer types
//similar information for floating point numbers
//is contained in <cfloat>

using namespace std;

int main()
{
    cout << "Sizeof information" << endl;
    cout << "------------------" << endl;

    cout << "char " << sizeof(char) << " bytes" << endl;
    cout << "int " << sizeof(int) << " bytes" << endl;
    cout << "unsigned int " << sizeof(unsigned int) << " bytes" << endl;
    cout << "short " << sizeof(short) << " bytes" << endl;
    cout << "long " << sizeof(long) << " bytes" << endl;
    cout << "long long " << sizeof(long long) << " bytes" << endl;

    //use value defined in <climits>
    cout << "=======================" << endl;

    cout << "Minimum values" << endl;
    cout << "------------------" << endl;
    cout << "char " << CHAR_MIN << endl;
    cout << "int " << INT_MIN << endl;
    cout << "short " << SHRT_MIN << endl;
    cout << "long " << LONG_MIN <<  endl;
    cout << "long long " << LLONG_MIN << endl;
    cout << "=======================" << endl;

    cout << "Maximum values" << endl;
    cout << "------------------" << endl;
    cout << "char " << CHAR_MAX << endl;
    cout << "int " << INT_MAX << endl;
    cout << "short " << SHRT_MAX << endl;
    cout << "long " << LONG_MAX <<  endl;
    cout << "long long " << LLONG_MAX << endl;
    cout << "=======================" << endl << endl;

    //Sizeof can also be used with variable names
    cout << "=======================" << endl;
    int age {21};
    cout << "Age is " << sizeof(age) << endl;
    cout << "  or     " << endl;
    cout << "Age is " << sizeof age << endl;
    //It is not compulsory to use a paranthesis if we are dealing with variables.

    double Wage{22.24};
    cout << "Wage is " << sizeof(Wage) << endl;
    cout << "  or     " << endl;
    cout << "Wage is " << sizeof Wage << endl;

    return 0;
}