#include<iostream>
using namespace std;

void subSequence(char *in, char *out, int i, int j){
    ///Base Case
    if(in[i] == '\0'){
        out[j] = '\0';
        cout << out<<endl;
        return;
    }
    ///Rec Case
    ///include the current char
    out[j] = in[i];
    subSequence(in, out, i+1, j+1);

    ///exclude the current char
    subSequence(in, out, i+1,j);
}

int main(){

    char input[10];
    cin>>input;
    char output[10];

    subSequence(input, output, 0, 0);
}
