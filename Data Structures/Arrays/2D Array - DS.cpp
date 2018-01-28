#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[6][6];
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>array[i][j];
        }
    }
    int m=-999999999;
    int sum;
    for(int i=0;i<4;i++){
        sum=0;
        for(int j=0;j<4;j++){
            sum=array[i][j]+array[i][j+1]+array[i][j+2]+array[i+2][j]+array[i+2][j+1]+array[i+2][j+2]+array[i+1][j+1];
            m=max(sum,m);
        }
    }
    cout<<m<<endl;
    return 0;
}