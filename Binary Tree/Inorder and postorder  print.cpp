#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node*left;
    node*right;

    node(int d)
    {
        data=d;
    left=NULL;
    right =NULL;
    }
};

node* buildtree()
{
    int d;
    cin>>d;

    if(d==-1)
    {
        return NULL;
    }

    node* root= new node(d);
    root->left= buildtree();
    root->right= buildtree();
    return root;

}

void printIn(node*root)
{
    if(root==NULL)
    {
        return;
    }

    printIn(root-> left);
    cout<<root->data<<" ";
    printIn(root->right);
}

void printPost(node*root)
{
    if(root==NULL)
    {
        return;
    }

    printPost(root->left);
    printPost(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node* root = buildtree();
    printIn(root);
    cout<<endl;
    printPost(root);

    return 0;
}
