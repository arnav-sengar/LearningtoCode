/*
Nested loops :
    loop nested within another loop 
    
    can be many as many levels deep as the program needs

    very useful with multi-dimensional date structures

    outer-loop vs inner-loop

Eg:
    for(outer_val{1} ; outer_val <= 2 ; outer_val++)
        for(inner_val{1} ; inner_val <= 3 ; inner_val++)
            cout << outer_val << "," << inner_val << endl;

    output:
        1,1
        1,2
        1,3
        2,1
        2,2
        2,3
    
    //multiplication table upto 10
    for(int i{1} ; i <= 10 ; i++)
        for(int j{1} ; j <= 10 ; j++)
        {
            cout << i << " * " << j << " = " << i*j << endl;
        }
        cout << "-----------------------" << endl;

    //set all array elements to 1000
    int grid[3][4] {};

    for(int row{0} ; row < 3 ; row++)
        for(int col{0} ; col < 4 ; col++)
            grid[i][j] == 1000;

    //display the array elements
    for(int row{0} ; row < 3 ; row++)
    {
        for(int col{0} ; col < 4 ; col++)
            cout << grid[i][j] << " ";
        cout << endl;
    }

    //display the 2-d vector elements

    vector <vector<int>> vector_2d
    {
        {1,2,3},
        {10,20,30},
        {100,200,300}
    };

    for(auto vec : vector_2d)
    {
        for(auto v : vec)
            cout << v << " ";
        cout << endl;
    }
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //multiplication table of 2
    for(int i{1};i<=10;i++)
        cout << "2 * " << i << " = " << 2*i << endl;

    //histogram
    int data_items{0};
    cout << "Enter the number of items you have : ";
    cin >> data_items;

    vector <int> data{};
    for(int i{1};i<=data_items;i++)
    {
        int item{0};
        cout << "Enter data item " << i << " : ";
        cin >> item;
        data.push_back(item);
    }

    cout << "Displaying data items : " << endl;
    for(auto val : data)
        cout << val << " ";
    cout << endl;

    cout << "Displaying Histogram" << endl;

    for(auto val : data)
    {
        for(int i{1};i<=val;i++)
            if(i%5==0)
                cout << "*";
            else
                cout << "-";
        cout << endl;
    }
    
    cout << endl;
    return 0;
}