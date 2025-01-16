#include <iostream>

using namespace std;

int main()
{
    int num{0};
    const int min{10};
    const int max{100};
    const int target{200};

    cout << "Enter a number between " << min << " and " << max << " : ";
    cin >> num;

    if(num >= min)
    {
        cout << "\n============if statement1=============" << endl;
        cout << num << " is greater than " << min << endl;  
        int diff{num - min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }

    if(num <= max)
    {
        cout << "\n============if statement2=============" << endl;
        cout << num << " is less than or equal to " << max << endl;
        int diff{max-num};
        cout << num << " is " << diff << " smaller than " << max << endl;
    }

    if(num >= min && num <= max)
    {
        cout << "\n============if statement3=============" << endl;
        cout << num << " is between " << min << " and " << max << endl;
    }

    if(num == min || num == max)
    {
        cout << "\n============if statement4=============" << endl;
        cout << num << " is right on the boundary" << endl;
    }

    cout << "\n============================================" << endl;

    cout << "\nEnter a number and compare i'll compare it to the target : " ;
    cin >> num;

    if(num >= target)
    {
        cout << "=================================" << endl;
        cout << num << " is greater than or equal to " << target << endl;
        int diff{num-target};
        cout << num << " is " << diff << " greater than " << target << endl;
    }
    else
    {
        cout << num << " is less than " << target << endl;
        int diff{target - num};
        cout << num << " is " << diff << " smaller than " << target << endl;
    }



    //Nested if-else statements
    int score{0};
    cout << "Enter your score on the exam : ";
    cin >> score;
    char letter_grade{'A'};

    if(score >= 0 && score <= 100)
    {
        if(score > 90)
            letter_grade = 'A';
        else if(score > 80)
            letter_grade = 'B';
        else if(score > 70)
            letter_grade = 'C';
        else if(score > 60)
            letter_grade = 'D';
        else 
            letter_grade = 'F';

        cout << "Your grade is : " << letter_grade << endl;
        if(letter_grade == 'F')
            cout << "Sorry, you must repeat this class" << endl;
    }
    else
    {
        cout << "Sorry " << score << " is not in range" << endl;
    }
    cout << endl;
    return 0;
}