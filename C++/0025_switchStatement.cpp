/*
The switch statement
    Syntax-
        switch (integer_control_expr)
        {
            case expression1 : 
                statement1;
                break;
            case expression2:
                statement2;
                break;
            case expression3:
                statement3;
                break;
            ....
            case expressionn:
                statementn;
                break;
            default :
                statement_default;
        }
    //default is optional but it is a good practice to incluce it.
    
    Eg:
        switch (selection)
        {
            case '1' :
                cout << "1 selected";
                break;
            case '2' : 
                cout << "2 selected";
                break;
            case '3' :
            case '4' :
                cout << "3 or 4 selected";
                break;
            default :
                cout << "1,2,3,4 NOT selected";
        }
    
    Eg: (fall through example)
        switch (selection)
        {
            case '1' :
                cout << "1 selected";
            case '2' : 
                cout << "2 selected";
            case '3' :
                cout << "3 selected";
            case '4' :
                cout << "3 or 4 selected";
                break;
            default :
                cout << "1,2,3,4 NOT selected";
        }

        //in this example if suppose case 1 runs, then all the cases after case 1 will also run...and their condition will not be checked...until we encounter a break in some case ....which in this example is..case 4
        //so the output will be something like(if case 1 runs)
        //1 selected
        //2 selected
        //3 selected
        //4 selected

Importand points:
    The control expression must evaluate to integer type

    The case expressions must be constant expressions that evaluate to integer or integer literals.
    
    Once a match occurs all the following case sections are evaluated UNTIL a break is reached the switch complete.

    Best Practice - provide break statement for each case
    Best Practice - default is optional, but should be handled
*/

#include <iostream>

using namespace std;

int main()
{
    char letter_grade{'0'};

    cout << "Enter the letter grade you expect on the exam : ";
    cin >> letter_grade;

    switch (letter_grade)
    {
        case 'a':
        case 'A':
            cout << "You need above 90 to get a A grade, study hard!" << endl;
            break;
        case 'b':
        case 'B':
            cout << "You need above 80 to get a B grade,go study!" << endl;
            break;
        case 'c':
        case 'C':
            cout << "You need 70-79 for an average grade" << endl;
            break;
        case 'd':
        case 'D':
            cout << "Hmm...should strive for a better grade" << endl;
            break;
        case 'f':
        case 'F':
        {
            char confirm{'0'};
            cout << "Are you sure?(Y/N) ";
            cin >> confirm;

            if(confirm == 'y' || confirm == 'Y')
                cout << "OK, I guess you did't study..." << endl;
            else if(confirm == 'n' || confirm == 'N')
                cout << "Good, now go study!" << endl;
            break;
        }
        default:
            cout << "Enter a valid grade" << endl;
            break;
    }
}