#include<iostream>
using namespace std;

int Multiply(int a,int n){
    if(n==1){
        return (a);
    }
    return (a+Multiply(a,n-1));
}
int main(){
    int a,n;
    cin>>a>>n;
    cout<<Multiply(max(a,n),min(a,n));
}
