#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,temp;
    cin>>N;
    map<int,int>m;
    for(int i=0;i<N;i++){
        cin>>temp;
        m[temp]++;
    }
    auto it=m.begin();
    int count=0;
    for(it;it!=m.end();it++){
        count+=(it->second)/2;
    }
    cout<<count<<endl;
    return 0;
}