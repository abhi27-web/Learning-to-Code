#include<iostream>
using namespace std;

bool isSafe(int board[][10],int i,int j,int n){
    ///You can for check col
    for(int row=0;row<i;row++){
        if(board[row][j]==1){
            return false;
        }
    }

    ///You can check for left Diagonal
    int x = i;
    int y = j;

    while(x>=0 && y>=0){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
    ///You can check for right Diagonal
    x = i;
    y = j;

    while(x>=0 && y<n){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y++;
    }

    ///The position is now safe
    return true;
}

bool solveNQueen(int board[][10],int i,int n){
    ///base case
    if(i==n){
        ///you have successfully place queens in n rows(0....n-1);
        ///print the board;

        for(int i=0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(board[i][j]==1){
                    cout<<"Q ";
                }
                else{
                    cout<<"_ ";
                }
            }
            cout<<endl;
        }
        return true;
    }

    ///Recursive Case
    ///Try to place the queen in current row
    for(int j = 0;j<n;j++){
        if(isSafe(board,i,j,n)){
            ///Place the Queen
            board[i][j]=1;

            bool nextQueenRakhPaye = solveNQueen(board,i+1,n);
            if(nextQueenRakhPaye){
                return true;
            }
            ///Means i,j is not the right position
            board[i][j] = 0;///BackTrack
        }
    }
    return false;


}

int main(){
    int n;
    cin>>n;
    int board[10][10] = {0};
    solveNQueen(board,0,n);
}
