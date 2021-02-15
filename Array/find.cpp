#include<iostream>
using namespace std;

bool find(int n, int m, int arr[][m], int key){
    for(int i=0;i<n;i++){
		if(arr[i][1]==key){
			return true;
		}
		else if(arr[i]>key){
			for(int j=0;j<m;j++){
				if(arr[i-1][j]==a){
					return true;
				}
				else if(arr[i-1][j]>a){
					return false;
				}
			}
			return false;
		}
	}
	return false;
}
int main() {
    int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int a;
			cin>>a;
			arr[i][j]=a;
		}
	}
	int key;
	cin>>key;
	find(n,m,arr,key);
	return 0;
}
