/*
    do-while loop

    syntax:
        do{
            statements;
        }
        while(expression);
    //exit controlled loop
    //loop body will execute atleast once

    Eg:
        int number{};
        do{
            cout << "Enter an integer between 1 and 5 : ";
            cin >> number;
        }while(number <= 1 || number >= 5);

        cout << "Thanks" << endl;
    
    Eg:
        char selection{'0'};

        do{
            double width{0.0},height{0.0};
            cout << "Enter the width and height seperated by space : ";
            cin >> width >> height;

            double area {width * height};
            cout << "The area is : " << area << endl;

            cout <<"Calculate another? (Y/N) ";
            cin >> selection;
        }while(selection == 'y' || selection == 'Y');

        cout << "Thank you!" << endl;
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char selection{};
    do
    {
        cout << "------------------------" << endl;
        cout << "1. Doing this!" << endl;
        cout << "2. Doing that!" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit!" << endl;

        cout << "\nEnter your selection : ";
        cin >> selection;

        switch (selection)
        {
        case '1':
        {
            cout << "You chose 1 - Doing this!" << endl;
            break;
        }
        case '2':
        {
            cout << "You chose 2 - Doint that!" << endl;
            break;
        }
        case '3':
        {
            cout << "You chose 3 - Do something else" << endl;
            break;
        }
        case 'q':
        case 'Q':
        {
            cout << "Ok, quitting ...see you!" << endl;
            break;
        }
        default:
        {
            cout << "Illegal Choice, try again" << endl;
            break;
        }
        }
    } while (selection != 'q' && selection != 'Q');
}