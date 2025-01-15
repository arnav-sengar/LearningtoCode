/*
    Arnav's Carpet Cleaning Service
    Charges 30$ per room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of room they would like to be cleaned
    and provide an estimate such as :-

            Estimate for carpet cleaning service :
            Number of room : 2 
            Price per room : 30$ 
            Cost : 60$ 
            Tax : 3.6$
            =================================
            Total estimate : 63.6$
            This estimate is valid for 30 days.

    Pseudocode :
        Prompt the user to enter the number of rooms
        Display the number of the rooms

        Display cost : (number of rooms * price per room)
        Display tax : (number of rooms * price per room * taxrate)
        Display total estimates : cost + tax
        Display estimate expiration time
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "\nHello Welcome to Arnav's Carpet Cleaning Services" << endl << endl;
    cout << "How many rooms would you like to be cleaned - ";

    int number_of_rooms {0};
    cin >> number_of_rooms;

    const double price_per_room {30.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30};

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "---------------------" << endl;
    cout << "Number of rooms : " << number_of_rooms << endl;
    
    cout << "Price per room : " << 30 << "$" << endl;
    cout << "Cost : " << number_of_rooms*price_per_room << "$"  << endl;
    cout << "Tax : " << number_of_rooms*price_per_room*sales_tax << "$" << endl;
    cout << "===============" << endl;
    cout << "Total  : " << price_per_room*number_of_rooms + price_per_room*sales_tax*number_of_rooms << "$" << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;

    return 0;
}