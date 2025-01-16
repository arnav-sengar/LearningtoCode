/*
    Logical Operator

    Operator           Meaning
   ------------------------------
      not(!)           negation

      and(&&)          logical and

      or(||)           logical or


    not(!)
    -----------------
    expression           not a(!a)
    ------------------------------
      true                false
      false               true
 

    and(&&)
    -----------------
    expressionA      expressionB    A and B(A && B)
    -----------------------------------------------
       true             true           true
       true             false          false
       false            true           false
       false            false          false

    
    or(||)
    -----------------
    expressionA      expressionB    A or B(A || B)
    -----------------------------------------------
       true             true           true
       true             false          true
       false            true           true
       false            false          false

    
    Precedence
    -------------
    !  >  &&  >  ||
    (not  >  logical and  >  logical or)

    *not is a unary operator
    *and and or are binary operators


    Short-Circuit Evaluation
    ---------------------------
    When evaluating a logical expression C++ stops as soon as the result is known.

    expr1 && expr2 && expr3
    expr1 || expr2 || expr3
*/

#include <iostream>

using namespace std;

int main()
{
    int num{0};
    const int lower {10};
    const int upper {20};

    cout << boolalpha;

    //Determine if an entered number is between two other integers
    //assume lower < upper
    cout << "Enter an integer-the boundaries are " << lower << " and " << upper << " : ";
    cin >> num;

    bool within_bounds {false};

    within_bounds = (num > lower && num < upper);
    cout << num << " is between " << lower << " and " << upper << " : " << within_bounds << endl;

    //Determine if an entered number is outside the given boundaries
    //assume lower < upper
    cout << "Enter an integer which is outside the bound : " << lower << " and " << upper << " : " ;
    cin >> num;

    bool outside_bounds {false};
    outside_bounds = (num < lower || num > upper);
    cout << num << " is outside " << lower << " and " << upper << " : " << outside_bounds << endl;

    //Determine whether you need to wear a coat based on temperature and wind speed
    bool wear_coat {false};
    double temperature {0.0};
    int wind_speed{0};

    const int wind_speed_for_coat {25};
    const double temperature_for_coat {45.0};

    //Require a coat if either wind speed is too high OR temperature is too low
    cout << "Enter the current temperature in (F) : ";
    cin >> temperature;
    cout << endl;

    cout << "Enter windspeed(in mph) : ";
    cin >> wind_speed;
    cout << endl;

    wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using OR : " << wear_coat << endl;

    wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using AND : " << wear_coat << endl;
    
    return 0;
}