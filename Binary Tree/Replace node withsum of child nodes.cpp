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


int count(node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+count(root->left) + count(root->right);
}
void bfs(node*root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* f= q.front();
        if(f==NULL)
        {
            cout<<endl;
            q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<f->data<<" ";
            q.pop();

            if(f->left)
            {
                q.push(f->left);
            }
            if(f->right)
            {
                q.push(f->right);
            }
        }
    }
    return;
}


int replaceSum(node*root)
{
    if(root==NULL)
    {
        return 0;

    }

    if(root->left==NULL && root->right==NULL)
    {
        return root->data;
    }
    //Recursive part
    int leftSum = replaceSum(root->left);
    int rightSum= replaceSum(root->right);

    int temp = root->data;
    root->data = leftSum +rightSum;
    return temp+root->data;


}



int main()
{
    node* root = buildtree();
    bfs(root);
    replaceSum(root);
    bfs(root);
    return 0;
}
