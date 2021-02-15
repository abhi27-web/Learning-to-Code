#include<iostream>
using namespace std;

int fastPower(int a,int b){
    if (b==0){
        return 1;
    }
    ///Rec case
    int smaller_ans = fastPower(a,b/2);
    smaller_ans *= smaller_ans;

    if(b&1){
        return smaller_ans * a;
    }
    return smaller_ans;
}

int main(){
    int a,b;
    cin>>a;
    cout<<"raised to";
    cin>>b;
    cout<<fastPower(a,b);

    return 0;
}

