#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char first_name[20] {};
    char full_name[50] {};
    char last_name[30] {};
    char temp[50] {};

    // cout << first_name << endl;

    // cout << "Please enter your first name : ";
    // cin >> first_name;

    // cout << "Please enter your last name : ";
    // cin >> last_name;

    // cout << "Hello! " << first_name << " your first name has " << strlen(first_name) << " characters." << endl;
    // cout << "Your last name has " << strlen(last_name) << " characters." << endl;

    // //strlen() doesn't return an integer rather it is
    // //more of a unsigned int/long depending on the system
    //to start a loop for reading character
    //we can use
    /***************************
     *  
     *      size_t
     * Eg:
     * for(size_t i{0} ; i<strlen(s) ; i++)
     *  
     ***************************/

    // strcpy(full_name,first_name);
    // strcat(full_name," ");
    // strcat(full_name,last_name);

    // cout << "Your full name is : " << full_name << endl;

    // cout << "Enter your full name : ";
    // cin >> full_name;
    // the problem with this normal cin extraction operator is that as soon as it encounters a whitespace it thinks that the input is complete..
    // so only your first name will be taken 
    // and last name will be ignored
    // cout << "Your full name(using cin) is : " << full_name << endl;

    // To enter your full name in one go...
    // we use cin.getline() function
    cout << "Enter your full name : ";
    cin.getline(full_name,50);
    // this will stop either when 50 characters are entered....or the user presses enter.
    cout << "Your full name(using cin.getline()) is : " << full_name << endl;    

    cout << "---------------------------" << endl;
    
    strcpy(temp,full_name);
    if(strcmp(temp,full_name)==0)
        cout << temp << " is same as " << full_name << endl;
    else
        cout << temp << " and " << full_name << " are different." << endl;

    for(size_t i{0};i<strlen(full_name);i++)
    {
        if(isalpha(full_name[i]))
            full_name[i]=toupper(full_name[i]);
    }
    cout << "Your full name is capital is : " << full_name << endl;

    if(strcmp(temp,full_name)==0)
        cout << temp << " is same as " << full_name << endl;
    else
        cout << temp << " is not same as " << full_name << endl;
}