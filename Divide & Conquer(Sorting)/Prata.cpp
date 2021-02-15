#include<iostream>
#include<climits>
using namespace std;
int RotiProducedByAchef(int rankOfChef,int minGiven){
    int MinTaken = 0;
    int RotiMade = 0,i = 1;
    while(MinTaken < minGiven){
        RotiMade++;
        MinTaken += (i*rankOfChef);
        i++;

    }
    return RotiMade;
}
int RotiMadeByAllChefInGivenMin(int arr[],int NoOfChefs,int minGiven){
    int TotalRoti = 0;
    for(int i = 0;i<NoOfChefs;i++){
        TotalRoti += RotiProducedByAchef(arr[i],minGiven);
    }
    return TotalRoti;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int NoOfRoti;
        cin>>NoOfRoti;
        int NoOfChef;
        cin>>NoOfChef;
        int ArrChefByRank[NoOfChef];
        for(int i = 0;i<NoOfChef;i++){
            cin>>ArrChefByRank[i];
        }

        int l = 0;
        int Higest_Rank = 0;
        for(int i = 0;i<NoOfChef;i++){
            Higest_Rank = max(Higest_Rank,ArrChefByRank[i]);
        }
        long long int r = ArrChefByRank[0] *((NoOfRoti*NoOfRoti + 1 )/2);
        int ans = INT_MAX;
        while(l<=r){
            int mid = (l+r)/2;
            int Rotip = RotiMadeByAllChefInGivenMin(ArrChefByRank,NoOfChef,mid);
            if(Rotip >= NoOfRoti){
                ans = min(ans,mid);
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }

        cout<<ans<<endl;
    }
}
