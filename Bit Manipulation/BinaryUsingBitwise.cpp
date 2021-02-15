#include<iostream>
using namespace std;

void decimalBinary(int n){
    while (n > 0){
        int last_bit = (n & 1);
        cout<< last_bit;
        n = n>>1;
    }
}

int main(){
    ///Given a Number N, find number of set bits in binary rep.of it
    int n;
    cin>>n;
    decimalBinary(n);
    return 0;
}
