#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,Q;
    cin>>N>>Q;
    vector<vector<int> >v(N);
    int query,x,y,index,lastAnswer=0,seq;
    for(int i=0;i<Q;i++){
        cin>>query>>x>>y;
        if(query==1){
            seq = (x^lastAnswer)%N;
            v[seq].push_back(y);
        }
        else{
            seq = (x^lastAnswer)%N;
            lastAnswer = v[seq][y%v[seq].size()];
            cout<<lastAnswer<<endl;
        }
    }
    return 0;
}