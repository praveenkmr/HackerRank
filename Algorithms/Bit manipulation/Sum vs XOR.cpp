#include<bits/stdc++.h>
using namespace std;
long totalZeros(long N){
    long count=0;
    while(N){
        if(N%2==0)
            count++;
        N = N/2;
    }
    return pow(2,count);
}
int main(){
    long N;
    cin>>N;
    cout<< totalZeros(N) <<endl;
    return 0;
}