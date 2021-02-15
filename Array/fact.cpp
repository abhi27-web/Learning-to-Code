#include<iostream>
using namespace std;

int main() {
	long long int n,f=1;
	cin>>n;
	if(n==0){
		cout<<"0";
	}
	else{
		for(int i=1;i<=n;i++){
            f=f*i;
		}
	}
	cout<<f;
}
