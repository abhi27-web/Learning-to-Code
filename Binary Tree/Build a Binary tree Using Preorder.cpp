#include<iostream>
using namespace std;

class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data)
    {
        this->data= data;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode* buildUsingPre()
{
    int d;
    cin>>d;
    if(d==-1) return NULL;
    TreeNode* root = new TreeNode(d);
    root->left = buildUsingPre();
    root-> right = buildUsingPre();
}

int main(int argc, char const *argv[])
{
    return 0;

}
