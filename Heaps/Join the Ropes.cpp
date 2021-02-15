#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void connectTheRopesWithMinCost(int *ropes, int n){
    priority_queue<int, vector<int>, greater<int>> pq(ropes, ropes + n);
    int cost = 0;
    while(pq.size()>1){
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();
        cost +=(first + second);
        pq.push(first+second);
    }
    cout<< cost;
}

int main(int argc, char const *argv[]){
    int n;
    cin>>n;
    int *arr = new int[n]();
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    connectTheRopesWithMinCost(arr,n);
    return 0;
}
