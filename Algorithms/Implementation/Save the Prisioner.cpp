#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,M,S;
        cin>>N>>M>>S;
        int num=S-1;
        num=(num%N+M%N)%N;
        if(num==0)
            num=N;
        cout<<num<<endl;
    }
    return 0;
}