#include<iostream>
#include<queue>
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


int main(){
    node*root=build();

    int s;
    cin>>s;
    if(search(root,s))
    {
        cout<<"present";
    }
    else
    {
        cout<<"not present";
    }
    return 0;
}
