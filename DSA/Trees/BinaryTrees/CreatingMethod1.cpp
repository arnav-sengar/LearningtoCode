#include <iostream>
#include <queue>
using namespace std;
class Node{
    public:
    int data;
    Node *left,*right;

    Node(int val){
        data = val;
        left=right=nullptr;
    }
};

int main(){
    int x;
    int left,right;
    queue <Node *> q;
    cout << "Enter the value at the root noode : " << endl;
    cin >> x;
    Node *root = new Node(x);
    q.push(root);
    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << "Enter the left child of the "<<temp->data<<" :" << endl;
        cin >> left;
        if(left != -1)
        {
            temp->left = new Node(left);
            q.push(temp->left);
        }
        cout << "Enter the right child of the "<<temp->data<<" :" << endl;
        cin >> right;
        if(right != -1)
        {
            temp->right = new Node(right);
            q.push(temp->right);
        }
    }

    return 0;
}

                        //          1
                        //     2         3
                        //   4    5    6    7
                        //      8   9

                        