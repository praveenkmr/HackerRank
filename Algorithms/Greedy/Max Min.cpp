#include<bits/stdc++.h>
using namespace std;
vector<unsigned int>v,v1;
int main(){
    int N,K,i,temp;
    cin>>N>>K;
    for(i=0;i<N;i++){
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(i=0;i<N-K+1;i++){
        int maxi=v[i];
        int mini=v[i];
        for(int j=i+1;j<i+K;j++){
                if(maxi<v[j])
                    maxi=v[j];
                if(mini>v[j])
                    mini=v[j];
        }
        v1.push_back(maxi-mini);
    }
    sort(v1.begin(),v1.end());
    cout<<v1[0];
    return 0;
}
