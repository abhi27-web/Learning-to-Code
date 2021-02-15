#include<iostream>
using namespace std;

void increasing(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    increasing(n-1);
    cout<<n<<endl;
    return;
}
void decreasing(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl;
    decreasing(n-1);
    return;
}

int main(){
    int n;
    cin>>n;
    increasing(n);
    decreasing(n);
    return 0;
}

