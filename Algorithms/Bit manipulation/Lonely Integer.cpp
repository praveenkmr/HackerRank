#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,temp;
    cin>>N;
    map<int,int>m;
    for(int i=0;i<N;i++){
        cin>>temp;
        m[temp]+=1;
    }
    map<int,int>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        if(it->second==1)
            cout<<it->first;
    }
    return 0;
}