#include <iostream>

using namespace std;

int main()
{
    /************************
     * Character type
     * *********************/
    char middle_initial{'S'}; //note the single quotes around the character.
    cout << "My middle name is : " << middle_initial << endl;


    /*************************
     * integer types
     * ***********************/
    int coutries_represented {65};
    cout << "There were " << coutries_represented << " countries represented in my meeting" << endl;

    long people_in_florida {20610028};
    cout << "There are about " << people_in_florida << " people living in Florida" << endl;

    long people_on_earth {7'600'000'000};
    cout << "There are about " << people_on_earth << " people on Earth" << endl;

    long long distance_to_alpha_centauri {9'462'000'000'000};
    cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;

    /*************************
     * Floating types
     * **********************/
    float car_payment {401.23};
    cout << "The car payment is " << car_payment << " dollars" << endl;

    double pi {3.14159};
    cout << "PI is " << pi << endl;

    long double large_amount {2.7e120};
    cout << large_amount << " is a very big number" << endl;

    /*************************
     * Boolean type
     * **********************/
    bool game_over{false};
    cout << "The value of Game over is " << game_over << endl;

    /*************************
     *  Overflow example
     * **********************/
    short value1{3000};
    short value2{1000};
    short sum{value1*value2};
    cout << "The sum of " << value1 << " and " << value2 << " is " << sum << endl;
    // This will throw an overflow error because the type of sum is short and short cannot store a larger value.

    return 0;
}