/*
Range-based for loop

    Introduced in C++11

    syntax:
        for(var_type var_name : sequence)
            statement; // can use var_name

        for(var_type var_name : sequence)
        {
            statements; //can use var_name
        }

    Eg:
        int scores[] {100,80,79};

        for(int score : scores)
            cout << score << endl;

        output: 100
                80
                79

    Eg:
        vector <double> temps{87.2, 77.1, 80.0, 72.5};

        double average_temp {0.0};
        double running_sum {0.0};

        for(auto temp : temps)
            running_sum += temp;

        average_temp = running_sum/temps.size();

    Eg:
        double average_temp{0.0};
        double running_sum{0.0};
        int size{0};

        for(auto temp : {60.2, 93.2, 94.2, 86.5})
        {
            running_sum += temp;
            ++size;
        }
        average_temp = running_sum/size;

    Eg: 
        for(auto c : "Arnav")
            cout << c << " ";
        
        output: A r n a v
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int scores[] {10,20,30};

    for(int score : scores)
        cout << score << endl;

    cout << "-------------------------" << endl;

    vector <double> temps {87.8, 93.2, 85.3, 30.5, 84.5};
    double average{0.0};
    double sum{0.0};

    for(auto temp : temps)
    {
        sum += temp;
    }
    average = sum/temps.size();
    cout << average << endl;

    cout << "-------------------------" << endl;

    for(auto val : {1,2,3,4,5})
        cout << val << endl;

    cout << "-------------------------" << endl;

    cout << "printing including spaces : " << endl;
    for(auto c : "My name is Arnav")
    {
        cout << c;
        if(c == ' ')
        cout << endl;
    }

    cout << endl;
    return 0;
}