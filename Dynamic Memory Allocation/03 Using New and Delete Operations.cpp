#include<iostream>
using namespace std;

int main(){
    //Allocation + deallocation
    int b[100];
    cout<<sizeof(b)<<endl;//symbol table
    // here b cant b overwritten, b is a part of ROM

    //Dynamic Allocation(on the fly)
    int n;
    cin>>n;
    int *a = new int[n];
    cout<<sizeof(a)<<endl;
    cout<<a<<endl;//variable a that is created inside the static memory -> Overwritten
    // a = new char[30];

    // No Change
    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }

    //FreeUp the space
    delete[] a;



    return 0;
}
