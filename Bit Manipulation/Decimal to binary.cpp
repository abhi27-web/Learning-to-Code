#include<iostream>
using namespace std;

void decimalToBinary(int n){
    while(n>0){
        int last_bit = (n&1);
        cout<< last_bit;
        n = n >> 1;
    }
}

int main(){
    int n;
    cin>>n;
    decimalToBinary(n);


    return 0;
}
