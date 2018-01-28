#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int mat[10][2];
    for(int i=0;i<N;i++){
        cin>>mat[i][0]>>mat[i][1];
    }
    int tempX=mat[0][0];
    int tempY=mat[0][1];
    int flag=0;
    for(int i=1;i<N;i++){
        if(tempX!=mat[i][0] && tempY!=mat[i][1]){
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}