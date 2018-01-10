#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int>v(N);
    for(int i=0;i<N;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    int minimum=abs(v[0]-v[1]),counter=0;
    for(int i=2;i<N;i++){
        if(minimum>abs(v[i-1]-v[i]))
            minimum=abs(v[i-1]-v[i]);
    }
    vector< pair<int,int> >v1;
    for(int i=1;i<N;i++){
        if(abs(v[i-1]-v[i])==minimum)
            v1.push_back(make_pair(v[i-1],v[i]));
    }
    for(vector<pair<int,int> >::iterator it=v1.begin();it!=v1.end();it++)
        cout<<it->first<<" "<<it->second<<" ";
    return 0;
}
