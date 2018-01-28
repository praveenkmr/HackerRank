#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,a,b,ver;
    cin>>N>>ver;
    vector<set<int> >v(N+1);
    for(int i=1;i<=ver;i++){
        cin>>a>>b;
        v[b].insert(a);
    }
    vector<int>child(N+1);
    for(int i=1;i<=N;i++)
        child[i]=1;

    for(int i=N;i>=1;i--){
       if(v[i].size()!=0){
        set<int>::iterator it=v[i].begin();
        for(it;it!=v[i].end();++it)
            child[i]+=child[*it];
       }
    }
    int counter=-1;
    for(int i=1;i<=N;i++)
        if(child[i]%2==0)
            counter+=1;
    cout<<counter<<endl;
    return 0;
}
