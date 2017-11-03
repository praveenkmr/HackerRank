#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int N,i,j;
    int sum=0,sum1=0,sum2=0;
    cin>>N;
    int mat[N][N];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            cin>>mat[i][j];
            if(i==j)
                sum1+=mat[i][j];
            if(i+j==(N-1))
                sum2+=mat[i][j];
        }
    }
    sum=abs(sum1-sum2);
    cout<<sum;
    return 0;
}
