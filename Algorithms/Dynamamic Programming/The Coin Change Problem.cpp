#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
typedef long long int ll;
using namespace std;
ll coin_set(vector<int>&v,int M,int N){
    vector<ll>temp(N+1,0);
    temp[0]=1;
    for(int i=0;i<M;i++){
        for(int j=v[i];j<=N;j++){
            temp[j]+=temp[j-v[i]];
        }
    }
    return temp[N];
}

int main() {
    int N,M;
    cin>>N>>M;
    vector<int>v(M);
    for(int i=0;i<M;i++)
        cin>>v[i];
    cout<<coin_set(v,M,N)<<endl;
    return 0;
}
