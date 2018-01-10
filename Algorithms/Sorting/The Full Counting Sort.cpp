#include<bits/stdc++.h>
using namespace std;

bool compare(const pair<int,string>&a,const pair<int,string>&b){
    if( a.first< b.first)
        return true;
    else
        return false;
}
vector<pair<int,string> >v;
int main() {
    int N,t,k;
    string str;
    cin>>N;

    for(int i=0;i<N;i++){
        cin>>t;
        cin>>str;
        if(i<N/2)
             v.push_back(make_pair(t,"-"));
        else
            v.push_back(make_pair(t,str));
    }
    stable_sort(v.begin(),v.end(),compare);
    vector<pair<int,string> >::iterator it;
    for(it=v.begin();it!=v.end();it++)
        cout<<it->second<<" ";
    return 0;
}
