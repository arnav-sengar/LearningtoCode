#include <iostream>

using namespace std;

int age {10};  // global variable
int main()
{
    int room_length {0}; //local variable
    int room_width {0}; //local variable
    int age {12};

    cout << "Enter the length and breadth of the room" << endl;
    
    cin >> room_length >> room_width;

    cout << "Area of the room is : " << room_length*room_width << " sq feet" << endl;

    cout << "Age is : " << age << endl;
    // this will overshadow the global age variable and it will print the value 12
    // if there was no variable named age in the main function...then the value 10 would have been printed which was stored in the global age variable.
    
    return 0;
}