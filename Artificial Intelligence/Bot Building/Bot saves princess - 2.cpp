#include <iostream>
#include <vector>
using namespace std;
void nextMove(int n, int r, int c, vector <string> grid){
    int Xp,Yp,Xb,Yb;
    Xb = r;
    Yb = c;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]=='p'){ Xp = i; Yp = j; }
        }
    }
    if(Xp > Xb)
        cout<<"DOWN\n";
    else if(Xp < Xb)
        cout<<"UP\n";
    else if(Yp > Yb)
        cout<<"RIGHT\n";
    else if(Yp < Yb)
        cout<<"LEFT\n";
    else{
        
    }
}
int main(){
    int n, r, c;
    vector<string>grid;
    string s;
    cin >> n >> r >> c;
    for(int i=0;i<n;i++){
        cin >> s;
        grid.push_back(s);
    }
    nextMove(n, r, c, grid);
    return 0;
}
