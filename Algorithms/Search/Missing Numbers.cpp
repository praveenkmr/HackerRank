#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int N,M,temp;
    cin>>N;
    map<int,ll>m;
    for(int i=0;i<N;i++){
        cin>>temp;
        m[temp]+=1;
    }
    cin>>M;
    for(int i=0;i<M;i++){
        cin>>temp;
        m[temp]-=1;
    }
    map<int,ll>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        if(it->second!=0)
            cout<<it->first<<" ";
    }
    return 0;
}