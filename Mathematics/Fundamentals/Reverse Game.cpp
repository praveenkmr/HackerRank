#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        vector<int>v;
        int N,K;
        cin>>N>>K;
        int k=N-1,j=0;
        for(int i=0;i<N;i++){
            v.push_back(k);
            v.push_back(j);
            k--;j++;
        }
        cout<<find(v.begin(),v.end(),K)-v.begin()<<endl;
    }
    return 0;
}