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

    int height(node* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int ls = height(root->left);
        int rs = height(root->right);
        return max(rs,ls) + 1;
    }

    void printKthLevel(node*root, int k)
    {
        if(root==NULL)
        {
            return;
        }
        if(k==1)
        {
            cout<<root->data<<" ";
            return;
        }
        printKthLevel(root->left,k-1);
        printKthLevel(root->right,k-1);
    }
void printAllLevels(node*root)
{
    int H=height(root);
    for(int i=0;i<=H;i++)
    {
        printKthLevel(root,i);
        cout<<endl;
    }
    return;
}


class Pair
{
public:
    int height;
    int diameter;
};

Pair fastdiameter(node*root)
{
    Pair p;
    if(root==NULL)
    {
        p.diameter = p.height = 0;
        return p;
     }

     Pair left = fastdiameter(root->left);
     Pair right = fastdiameter(root->right);

     p.height = max(left.height,right.height) +1;
     p.diameter = max(left.height + right.height, max(left.diameter,right.diameter));
     return p;
}


int main()
{
    node* root = buildtree();

    printAllLevels(root);
    Pair p=fastdiameter(root);
    cout<<p.height<<endl;
    cout<<p.diameter<<endl;

    return 0;
}
