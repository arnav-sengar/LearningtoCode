#include <iostream>
#include <vector>
using namespace std;
class Node{
    public:
    //node structure
    int data;
    Node *next;

    public:
    //constructor
    Node(int data1, Node *next1){
        data=data1;
        next=next1;
    }
};

int main(){
    vector<int>arr = {2,3,5,7};
    Node *y = new Node(arr[2],nullptr);
    cout << y->data;
    cout << y->next;

    //if we write 
    //Node y = Node(arr[2],nullptr);
    //it'll create an object of y that can be accessed with the dot operator
    //example :
    //cout << y.data o