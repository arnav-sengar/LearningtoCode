#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left,*right;

    Node(int val){
        data = val;
        left = right = nullptr;
    }
};

Node *BinaryTree(){
    int x;
    cin >> x;
    if(x==-1)
        return NULL;
    
    Node *temp = new Node(x);

    //left side create first
    cout << "Enter left child of "<< x << " :";
    temp->left = BinaryTree();

    //right side create later
    cout << "Enter the right child of "<< x << " :";
    temp->right = BinaryTree();

    return temp;
}
    
int main()
{
    cout << "Enter the root Node : ";
    Node *root = BinaryTree();
}