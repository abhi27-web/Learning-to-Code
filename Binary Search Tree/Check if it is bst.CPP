#include<iostream>
#include<queue>
#include<climits>
using namespace std;

class node{
public:
    int data;
    node*left;
    node*right;

    node(int d){
        data=d;
        left= NULL;
        right = NULL;
    }
};

node* insertInBST(node *root,int data){
    if(root==NULL){
        return new node(data);

    }
    if(data<= root->data){
        root->left = insertInBST(root->left,data);

    }
    else{
        root->right = insertInBST(root->right,data);
    }
    return root;
}

node* build(){
    int d;
    cin>>d;

    node*root= NULL;

    while(d!= -1){
        root = insertInBST(root,d);
        cin>>d;
    }
    return root;
}

bool search(node*root, int data)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->data == data){
        return true;
    }
    if(data <= root->data){
        return search(root->left,data);
    }
    else{
        return search(root->right,data);
    }
}

bool isBST(node *root,int minV = INT_MIN, int maxV = INT_MAX){
    if(root==NULL){
        return true;
    }
    if(root->data >= minV && root->data<=maxV && isBST(root->left,minV,root->data) && isBST(root->right,root->data,maxV))
    {return true;}
    return false;


}

int main(){
    node*root=build();


    if(isBST(root))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"not a BST";
    }
    return 0;
}

