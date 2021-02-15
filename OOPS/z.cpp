#include<iostream>
#include<vector>
#include<stack>
using namespace std;

bool isIPv4Address(std::string a) {
    int cnt=0;
    for(int i=0;i<a.length();i++){
        if(i==a.length() && a[i]=='.'){
            cout<<i<<" "<<"1"<<endl;
            return false;
        }
        else if(i==0 && a[i]=='.'){
            cout<<i<<" "<<"2"<<endl;
            return false;
        }
        else if(isalpha(a[i])){
            cout<<i<<" "<<"3"<<endl;
            return false;
        }
        else if(a[i]=='.'){
            cnt++;
            if(cnt>3){
                cout<<i<<" "<<"4"<<endl;
                return false;
            }
            int num=0;
            for(int j=i+1;a[j]!='.';j++){

                num=(num*10)+a[j];
            }
            if(num>255){
                    cout<<i<<" "<<num<<endl;
                return false;
            }
        }
    }
    cout<<" "<<"8"<<endl;
    return true;
}



int main(){
    std::string inputString="172.16.254.1";
    cout<<isIPv4Address(inputString);
    return 0;
}

