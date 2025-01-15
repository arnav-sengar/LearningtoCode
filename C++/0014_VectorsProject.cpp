#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //vector <char> vowels;  //empty
    //vector <char> vowels(5);  //5 characters are initialized to 0

    vector <char> vowels {'a','e','i','o','u'};

    cout << vowels[0] << endl;
    cout << vowels[4] << endl;

    //vector <int> test_scores(3); // 3 elements all initialized to 0
    //vector <int> test_scores(5,100); // 5 elements all initialized to 100

    vector <int> test_scores {100,50,85};
    
    cout << "Test scores using array syntax : " << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    cout << "Test scores using vector syntax : " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    // Displaying the size of a vector
    cout << "There are " << test_scores.size() << " scores in the vector." << endl;

    // Entering values in vector
    cout << "Enter 3 test scores :" << endl;
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);
    

    cout << "The updated test scores are : " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    // Adding values to the vector
    cout << "Enter a test score to add to the vector : " << endl;
    int score_to_add{0};
    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "Enter one more value to add to the vector : " << endl;
    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "The test scores are : " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;

    cout << "There are " << test_scores.size() << " scores in the vector." << endl;

    //cout << "This should NOT cause an exception!" << test_scores[10] << endl;
    //because this is written in array syntax

    //cout << "This should cause an exception!" << test_scores.at(10);
    //because this is written in vector syntax


    // 2-D vector example
    vector <vector<int>> movie_rating
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    cout << "Here are the movie rating for reviewer #1 using array syntax : " << endl;
    cout << movie_rating[0][0] << endl;
    cout << movie_rating[0][1] << endl;
    cout << movie_rating[0][2] << endl;

    cout << "Here are the movie rating for reviewer #2 using vector syntax : " << endl;
    cout << movie_rating.at(0).at(0) << endl;
    cout << movie_rating.at(0).at(1) << endl;
    cout << movie_rating.at(0).at(2) << endl;
    
    return 0;
}