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


node* createTreeFromTrav(int *in, int *pre, int s, int e)
{
    static int i = 0;
    if(s>e)
    {
        return NULL;
    }

    node *root = new node(pre[i]);

    int index =-1;
    for(int j=s; s<=e;j++)
    {
        if(in[j]==pre[i])
        {
            index=j;
            break;
        }
    }
    i++;
    root->left = createTreeFromTrav(in,pre,s,index-1);
    root->right = createTreeFromTrav(in, pre, index+1,e);
    return root;
}
int main()
{
    int in[]={3,2,8,4,1,6,7,5};
    int pre[]={1,2,3,4,8,5,6,7};
    int n= sizeof(in)/sizeof(int);
    node*root = createTreeFromTrav(in,pre,0,n-1);
    printAllLevels(root);
    return 0;
}
