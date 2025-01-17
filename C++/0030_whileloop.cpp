/*
    while loop 

    syntax : 
        while(expression)
            statement;

        while(expression)
        {
            statement;
        }

    Eg:
        //counting from 1 to 5
        int i{1};

        while(i<=5)
        {
            cout << i << endl;
            ++i;         //important or the loop won't terminate
        }

    Eg:
        // printing even numbers upto 10
        int i{1};
        
        while(i <= 10)
        {
            if(i%2 == 0)
                cout <<  i << endl;
            ++i;
        }

    Eg:
        //asking for a number until the number entered is less than or equal to 100
        int num{0};

        cout << "Enter a number less than or equal to 100" << endl;
        cin >> num;

        while(num >= 100)
        {
            cout << "Enter an integer less than or equal to 100" << endl;
            cin >> num;
        }
        
        cout << "Thanks" << endl;
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num{0};
    cout << "Enter a positive integer - start the countdown : ";
    cin >> num;

    while(num>0)
    {
        cout << num << endl;
        --num;
    }
    cout << "Take off!!" << endl;

    cout << "Enter a positive integer to count up to : ";
    cin >> num;

    int i{1};
    while (num>=i)
    {
        cout << i << endl;
        ++i;
    }
    cout << "Blastoff!!" << endl;

    int x{};
    cout << "Enter a number less than 100 : ";
    cin >> x;

    while(x>100)
    {
        cout << "Enter a number less than 100 : ";
        cin >> x; 
    }
    cout << "Thank you!" << endl;

    int y{};
    cout << "Enter a number between 1 and 5 : ";
    cin >> y;

    while(y<=1 || y>=5)
    {
        cout << "Enter a number between 1 and 5 : ";
        cin >> y;
    }
    cout << "Thank you!!" << endl;

    bool done{false};
    int number{0};

    while(!done)
    {
        cout << "Enter an integer between 1 and 5 : ";
        cin >> number;
        if(number <= 1 || number >=5)
        {
            cout << "Out of range!, try again : ";
            cin >> number;
        }
        else
        {
            cout << "Thank you!" << endl;
            done = true;
        }
    }

    cout << endl;
    return 0;
}
