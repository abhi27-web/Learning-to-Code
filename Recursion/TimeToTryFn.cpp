#include<iostream>
using namespace std;

int Fn(int a,int b){
    ///Base case
    if(b==0){
        return 1;
    }
    ///Recursive Case
    return a*Fn(a,b-1);
}


int main(){
    int a,b;
    cin>>a;
    cout<<"raised to";
    cin>>b;
    cout<<Fn(a,b);

    return 0;
}

