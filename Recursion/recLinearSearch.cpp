#include <iostream>
using namespace std;

int firstOcc(int *a, int n, int key)
{
    if(n==0){
        return -1;
    }
    if(a[0] == key){
        return 0;
    }

    int i = firstOcc(a+1,n-1,key);
    if(i==-1){
        return -1;
    }
    return i+1;
}

int linearsearch(int *a,int i,int n){
    if(i==n){
        return -1;
    }

    if(a[i]==key){
        return i;
    }
    return linearsearch(a,i+1,n,key);

}

int main(void)
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int result = firstOcc(arr, n, key);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;
    return 0;
}
