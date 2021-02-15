#include<iostream>
using namespace std;

void bubble_sort(int a[], int n){
    ///Base Case
    if(n==1){
        return;
    }

    ///Rec Case
    for(int j = 0; j < n-1;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
    ///Sort the first n-1 elements
    bubble_sort(a,n-1);
}

void bubble_sort_recursive(int a[], int j, int n){

    ///Base case
    if(n==1){
        return;
    }

    if(j == n-1){
        ///Single pass of the current array
        return bubble_sort_recursive(a,0,n-1);
    }
    ///Rec Case
    if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
    }
    bubble_sort_recursive(a,j+1,n);
    return;
}

int main(){

    cout<<"Enter size of the array: ";
    int n;
    cin>>n;
    int a[n];
    for(int i =0; i<n;i++){
        cin>>a[i]<<" ";
    }
    bubble_sort_recursive(a,0,n);
    for(int i =0;i<n;i++){
            cout<<a[i];
        }
}
