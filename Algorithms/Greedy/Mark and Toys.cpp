#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,K,i,temp;
    cin>>N>>K;
    vector<int>v;
    for(i=0;i<N;i++){
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    i=0;
    int t_cost=v[i];
    int tot=0;
    while(t_cost<=K){
        tot++;
        i++;
        t_cost+=v[i];

    }
    cout<<tot<<endl;
    return 0;
}
