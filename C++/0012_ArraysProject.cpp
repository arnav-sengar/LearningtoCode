#include <iostream>

using namespace std;

int main() 
{
    char vowels[] {'a','e','i','o','u'};
    cout << "The first vowel is " << vowels[0] << endl;
    cout << "The last vowel is " << vowels[4] << endl;
    
    //cin >> vowels[5]; 
    //out of bounds error

    double hi_temps[] {90.1,88.9,34.9,83.2};
    cout << "The first high temperature is " << hi_temps[0] << endl;

    hi_temps[0] = 100.8;
    cout << "The first high temperature is " << hi_temps[0] << endl;

    int test_scores[5]; //this will give some garbage value to all elements

    cout << "First score at index 0 : " << test_scores[0] << endl;
    cout << "Second score at index 1 : " << test_scores[1] << endl;
    cout << "Third score at index 2 : " << test_scores[2] << endl;
    cout << "Fourth score at index 3 : " << test_scores[3] << endl;
    cout << "Fifth score at index 4 : " << test_scores[4] << endl;

    cout << "Enter 5 test scores : " ;
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout << "The update test scores are : " << endl;
    cout << "First score at index 0 : " << test_scores[0] << endl;
    cout << "Second score at index 1 : " << test_scores[1] << endl;
    cout << "Third score at index 2 : " << test_scores[2] << endl;
    cout << "Fourth score at index 3 : " << test_scores[3] << endl;
    cout << "Fifth score at index 4 : " << test_scores[4] << endl;

    cout << "Notice the value of array name is : " << test_scores << endl;
    //this will give some hexadecimal number...which is the memory address /storage location where array is located.
    
    return 0;
}