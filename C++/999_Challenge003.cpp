/*
Write a C++ program as follows :

    Declare 2 empty vectors of integers named
    vector1 and vector2 respectively

    Add 10 and 20 to vector1 dynamically using push_back
    Display the elements in vector1 using the .at() method as well as it's size using the size() method

    Add 100 and 200 to vector2 dynamically using push_back
    Display the elements in vector2 using the .at() method as well as it's size using the size() method

    Declare an empty 2-D vector called vector_2d
    Remember that a 2-D vector is a vector of vector<int>

    Add vector1 to vector_2d dynamically using push_back
    Add vector2 to vector_2d dynamically using push_back

    Display the elements in vector_2d using the at() method

    Change vector1.at(0) to 1000

    Display the elements in vector_2d using the .at() method again
    
    Display the elements in vector1

    What did you expect? Did you get what you wanted? What do you think happened? 
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "Vector1 is :" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "Vector2 is :" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;

    vector <vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "The elements of 2-D vector are : " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    
    vector1.at(0) = 1000;

    cout << "Vector1 is :" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    cout << "Now the elements of 2-D vector are : " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    return 0;
}