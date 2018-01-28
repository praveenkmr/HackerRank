#include<bits/stdc++.h>
using namespace std;
long countNumber(long N){
    long count=0,K=0;
    while(N > 0){
        if(N%2 == 0)
            count+=pow(2,K);
        K++;
        N=N/2;
    }
    return count;
}
int main(){
    long T,N;
    cin>>T;
    while(T--){
        cin>>N;
        cout<<countNumber(N)<<endl;
    }
    return 0;
}