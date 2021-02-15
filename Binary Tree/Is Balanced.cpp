#include <bits/stdc++.h>
using namespace std;
int x=0;
class node{

    public:
    node*right=NULL;
    node*left=NULL;
    int data;

    node(int d){
        data=d;
    }

};

node*insert(node*&root){

if(x==0){
int k;
cin>>k;
x++;
root=new node(k);
root->left=insert(root->left);
root->right=insert(root->right);
return root;
}

   string s="abc";
   cin>>s;
  if(s!="abc"){

       if(s=="true"){
       int d;
       cin>>d;
       node*nn=new node(d);
       nn->left=insert(nn->left);
       nn->right=insert(nn->right);
       return nn;

      }

      else{
         return root;
      }

  }

    return root;

}

int height(node* node)
{

    if (node == NULL)
        return 0;
    return 1 + max(height(node->left),
                   height(node->right));
}

bool isBalanced(node* root)
{
    int lh;
    int rh;
    if (root == NULL)
        return 1;
    lh = height(root->left);
    rh = height(root->right);
    if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;

    return 0;
}
int max(int a, int b)
{
    return (a >= b) ? a : b;
}

int main()
{
     node*root=NULL;
     x=0;
    insert(root);

    if (isBalanced(root))
        cout << "true";
    else
        cout << "false";
    return 0;
}
