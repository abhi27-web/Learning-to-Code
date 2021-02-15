#include<iostream>
using namespace std;
int main() {
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			int a;
			cin>>a;
			arr[i][j]=a;
		}
		cout<<endl;
	}
	cout<<endl;
	for(int j=0;j<n;j++){
        if((j+1)%2!=0){
            for(int i=0;i<m;i++)
                cout<<arr[i][j]<<", ";
        }
        else{
            for(int i=m-1;i>=0;i--)
                cout<<arr[i][j]<<", ";
        }
	}
	cout<<"END";
	return 0;
}
