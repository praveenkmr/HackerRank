#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,q,size,temp,t1,t2;
    cin>>N>>q;
    vector<vector<int> >v(N);
    for(int i=0;i<N;i++){
        cin>>size;
        for(int j=0;j<size;j++){
            cin>>temp;
            v[i].push_back(temp);
        }
    }
    for(int i=0;i<q;i++){
        cin>>t1>>t2;
        cout<<v[t1][t2]<<endl;
    }
    return 0;
}
