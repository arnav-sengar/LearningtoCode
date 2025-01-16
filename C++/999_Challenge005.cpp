/*
    Shopping cost calculator

    Ask the user for package dimension in inches
    length, width, height - these should be integers

    All dimensions must be 10 inches or less or we cannot ship it

    Base cost $2.50
    If package volume is greater than 100 cubic inches there is a 10% surcharge
    If package volume is greater than 500 cubic inches there is a 25% surcharge
*/

#include <iostream>

using namespace std;

int main()
{
    int length{0}, width{0}, height{0};
    double base_cost{2.5};

    const int tier1_threshold{100};
    const int tier2_threshold{500};

    int max_dimension_length{10};

    double tier1_surcharge{0.10};
    double tier2_surcharge{0.25};

    int package_volume{0};

    cout << "Welcome to the package cost calculator!" << endl;
    cout << "Enter the length, breadth, and height of your package seperated by spaces : ";
    cin >> length >> width >> height;

    if(length > max_dimension_length || width > max_dimension_length || height > max_dimension_length)
    {
        cout << "Sorry, We cannot ship your package!" << endl;
    }
    else
    {
        double package_cost{base_cost};
        package_volume = length*width*height;

        cout << "The volume of your package is : " << package_volume << endl;

        if(package_volume > tier2_threshold)
        {
            package_cost += package_cost*tier2_surcharge;
            cout << "Adding tier2 surcharge" << endl;
        }
        else if(package_volume > tier1_threshold)
        {
            package_cost += package_cost*tier1_surcharge;
            cout << "Adding tier1 surcharge" << endl;
        }

        cout << "The total cost for your delivery is : " << package_cost << endl;
    }
    return 0;
}