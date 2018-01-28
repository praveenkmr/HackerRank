#include<iostream>
#include<vector>
using namespace std;
void next_move(int r,int c,vector <string> board){
    int min_=999;
    int bX=r,bY=c;
    int dX,dY;
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[i].size();j++){
            if(board[i][j]=='d' && min_ > (abs(i-bX)+abs(j-bY))){
                min_ = abs(i-bX)+abs(j-bY);
                dX=i;
                dY=j;
            }        
        }
    }
    if(dY > bY)
        cout<<"RIGHT\n";
    else if(dY < bY)
        cout<<"LEFT\n";
    else if(dX > bX )
        cout<<"DOWN\n";
    else if(dX < bX)
        cout<<"UP\n";
    else
        cout<<"CLEAN\n";
    bX=dX;
    bY=dY;
}
int main(void) {
    int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    next_move(pos[0], pos[1], board);
    return 0;
}
