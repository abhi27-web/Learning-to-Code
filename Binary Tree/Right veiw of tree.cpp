#include <iostream>
#include "vector"
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


void rightViewUtil(node *root,int level, int *max_level)
{
    if (root == NULL)
        return;

    if (*max_level < level)
    {
        cout <<root->data<<" ";
        *max_level = level;
    }
    rightViewUtil(root->right, level + 1, max_level);
    rightViewUtil(root->left, level + 1, max_level);
}
void rightView(node *root)
{
    int max_level = 0;
    rightViewUtil(root, 1, &max_level);
}


int main(int argc, char const *argv[])
{
    node* root = buildtree();
    rightView(root);
    return 0;
}
