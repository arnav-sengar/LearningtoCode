/*
    Arnav's Carpet Cleaning Service
    Charges 35$ per large room and 25$ per small room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of room they would like to be cleaned
    and provide an estimate such as :-

            Estimate for carpet cleaning service :
            Number of large rooms : m
            Number of small rooms : n 
            Price per large room : 35$
            Price per samll room : 25$ 
            Cost : x$ 
            Tax : y$
            =================================
            Total estimate : z$
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
    
    cout << "How many small rooms would you like to be cleaned - ";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;

    cout << "How many large rooms would you like to be cleaned - ";
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "---------------------" << endl;

    cout << "Number of large rooms : " << number_of_large_rooms << endl;
    cout << "Number of small rooms : " << number_of_small_rooms << endl;

    const double price_per_large_room {35.0};
    const double price_per_small_room {25.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30};
    
    cout << "Price per large room : " << price_per_large_room << "$" << endl;
    cout << "Price per small room : " << price_per_small_room << "$" << endl;
    cout << "Cost : " << number_of_large_rooms*price_per_large_room +number_of_small_rooms*price_per_small_room << "$"  << endl;
    cout << "Tax : " << (number_of_large_rooms*price_per_large_room + number_of_small_rooms*price_per_small_room)*sales_tax << "$" << endl;
    cout << "===============" << endl;
    cout << "Total  : " << price_per_large_room*number_of_large_rooms + price_per_large_room*sales_tax*number_of_large_rooms + price_per_small_room*number_of_small_rooms + price_per_small_room*sales_tax*number_of_small_rooms << "$" << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;

    return 0;
}