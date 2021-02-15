#include<iostream>
using namespace std;

int main(){
    ///Problem - Unique Number 2N+1
    ///Given a list of numbers where every number occurs twice except one, find that unique number.
    int n;
    cin>>n;

    int no;
    int ans = 0;

    for(int i = 0;i<n;i++){
        cin>>no;
        ans = ans^no;
    }
    cout<<ans<<endl;
    return 0;
}
