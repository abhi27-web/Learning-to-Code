#include<iostream>
using namespace std;
void TOH(char fmT, char toT, char usT, int n)
{
    if(n==0) return;
    TOH(fmT, usT, toT, n-1);
    cout<<"Moving ring "<<n<<" from "<<fmT<<" to "<<toT<<endl;
    TOH(usT, toT, fmT, n-1);
}
int main()
{
    int n;
    cin>>n;
    TOH('A','C','B',n);
}



