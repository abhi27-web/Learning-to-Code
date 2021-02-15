#include<iostream>
using namespace std;

void sumPair(int arr[],int k,int n,int t){
    if(t==n){
        return;
    }
    int slow=t;
    int fast=t+1;
    while(fast<=n){
        if(arr[fast]+arr[slow]==k){
            cout<<min(arr[slow],arr[fast])<<" and "<<max(arr[slow],arr[fast])<<endl;
        }
        fast++;
    }
    sumPair(arr,k,n,t+1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		arr[i]=a;
	}
	int k;
	cin>>k;
	sumPair(arr,k,n,0);
}
