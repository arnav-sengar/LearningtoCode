/*
    for loop

    syntax:
        for (initialization ; condition ; increment)
            statement;


        for (initialization ; condition ; increment)
        {
            statement(s);
        }

    initialization--

    1)
        int i {0};

        for(i=1 ; i <= 5 ; i++)
            cout << i << endl;
        
    2)
        for (int i{1} ; i <= 5 ; i++)
            cout << i << endl;

    3)
        for (int i{1} ; i <= 5 ; i++)
            cout << i << endl;
        
        i = 100;
        //ERROR : i is only visible inside the loop

    loops with array :

        int scores[] {100,97,87};

        for(int i {0} ; i < 3 ; i++)
        {
            cout << scores[i] << endl;
        }

        //a different way of representation
        for(int i{0};i<=2;i++)
        {
            cout << scores[i] << endl;
        }

    output : 
        100
        97
        87
    
    comma operator in loops:

        for(int i{1},j{5} ; i <= 5 ; ++i,++j)
        {
            cout << i << " * " << j << " = " << (i*j) << endl;
        }

    output :
        1 * 5 = 5
        2 * 6 = 12
        3 * 7 = 21
        4 * 8 = 32
        5 * 9 = 45

    some other details-
        The basic for loop is very clear and concise.

        Since the for loop's expressions are all optional, it is possible to have 
            no initialization 
            no test
            no increment
        
        for (;;)
            cout << "Endless loop" << endl;
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    for(int i{1} ; i < 5 ; i++)
        cout << i << endl;

    cout << "-----------------------" << endl;

    for(int i{1} ; i<=10;i+=2)
        cout << i << endl;
    
    cout << "-----------------------" << endl;

    for(int i{10};i>0;i--)
        cout << i << " " ;
    
    cout << endl;
    cout << "-----------------------" << endl;

    for(int i{10};i<=100;i+=10)
        cout << i << " ";
    
    cout << endl;
    cout << "-----------------------" << endl;

    for(int i{10};i<=100;i+=10)
    {
        if(i%15 == 0)
            cout << i << " " ;
    }
    
    cout << endl;
    cout << "-----------------------" << endl;

    for(int i{1},j{5} ; i<=5 ; ++i,++j)
        cout << i << " + " << j << " = " << (i+j) << endl;

    cout << endl;
    cout << "-----------------------" << endl;

    for(int i{1} ; i <= 100 ; ++i)
    {
        cout << i;
        if(i%10==0)
        cout << endl;
        else 
        cout << " ";
    }

    cout << endl;
    cout << "-----------------------" << endl;

    vector <int> num{10,20,30,40,50};
    for(int i{0};i<num.size();i++)
        cout << num.at(i) << " " ;

    cout << endl;
    return 0;
}