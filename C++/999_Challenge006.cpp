/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char choice{};
    vector <int> vec{};
    
    do
    {
        cout << "----------------------------------" << endl;
        cout << "P - print numbers in the list" << endl;
        cout << "A - add numbers to the list" << endl;
        cout << "M - Display the mean of the numbers" << endl;
        cout << "S - Display the smallest number in the list" << endl;
        cout << "L - Display the largest number in the list" << endl;
        cout << "----------------------------------" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
            case 'p':
            case 'P':
                if(vec.size() == 0)
                    cout << "[] - The list is empty" << endl;
                else
                {
                    cout << "[ ";
                    for(auto v : vec)
                        cout << v << " ";
                    cout << "]" << endl;
                }
                break;

            case 'a':
            case 'A':
                int xyz;
                cout << "Enter a value to be entered in the list : ";
                cin >> xyz;
                vec.push_back(xyz);
                break;
            
            case 'm':
            case 'M':
                if(vec.size()==0)
                    cout << "The list is empty!" << endl;
                else
                {
                    int total{0};
                    for(auto v : vec)
                        total += v;
                    cout << "The mean of the numbers is : " << static_cast <double> (total)/vec.size() << endl;
                }
                break;
            
            case 's':
            case 'S':
                if(vec.size()==0)
                    cout << "There is nothing in the list" << endl;
                else
                {
                    int min{vec.at(0)};
                    for(auto v : vec)
                    {
                        if(min > v)
                            min = v;
                    }
                    cout << "The smallest number in the list is : " << min << endl;
                }     
                break;

            case 'l':
            case 'L':
                if(vec.size()==0)
                    cout << "There is nothing in the list" << endl;
                else
                {
                    int max{vec.at(0)};
                    for(auto v : vec)
                    {
                        if(max < v)
                            max = v;
                    }
                    cout << "The largest number in the list is : " << max << endl;
                }     
                break;
            
            case 'q':
            case 'Q':
                cout << "OK, Goodbye!" << endl;
                break;
            default:
                cout << "\nInvalid choice. Please Enter again" << endl;
        
        }
    }while(choice != 'q' && choice != 'Q');

    cout << endl;
    return 0;
}

/******************************************** 
 * 
 * 
 * If you input 'ald' in the terminal while this code 
 * is running......
 * 
 * i don't know what happens....
 * 
 * if somebody gets it....
 * 
 * please help me!!!
 * 
 * 
 *********************************************/