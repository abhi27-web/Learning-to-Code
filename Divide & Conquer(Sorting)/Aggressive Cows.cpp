#include<iostream>
using namespace std;

bool canPlaceCows(int stalls[],int n, int c, int min_sep){

    int last_cow = stalls[0];
    ///Place the first cow in first stall
    int cnt = 1;

    for(int i = 1;i<n;i++){
        if(stalls[i]-last_cow>=min_sep){
            last_cow = stalls[i];
            cnt++;
            if(cnt==c){
                return true;
            }
        }
    }
    return false;
}

int main(){
    ///Problem : Agressive Cows(Spoj.com)
    int stalls[] = {1,2,4,8,9};///After sorting
    int n = 5;

    int cows = 3;

    ///binary search algorithm
    int s = 0;
    int e = stalls[n-1] - stalls[0];

    int ans = 0;
    while(s<=e){
        int mid = (s+e)/2;

        bool canArrange = canPlaceCows(stalls,n,cows,mid);
        if(canArrange){
            ans = mid;
            s=mid+1;
        }
        else{
            e = mid -1;
        }
    }
    cout<< ans <<endl;
    return 0;

}
