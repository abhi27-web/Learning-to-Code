#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {20,30,40,40,40,50,100,1100};
    int n = sizeof(arr)/sizeof(int);
    ///Search in a sorted array

    int key;
    cin>>key;

    bool present = binary_search(arr,arr+n,key);
    if(present){
        cout<<"Present";
    }
    else{
        cout<<"Absent!";
    }

    auto lb = lower_bound(arr,arr+n,40);
    cout<<endl<<"Lower bound of 40 is "<<(lb-arr)<<endl;

    if((lb-arr)==n){
        cout<<"Element is not present"<<endl;
    }

    ///upper bound method
    auto up = upper_bound(arr,arr+n,40);
    cout<<endl<<"Lower bound of 40 is "<<(up-arr)<<endl;

    cout<<"Occ Freq of 40 is "<<(up-lb)<<endl;

    return 0;
}

