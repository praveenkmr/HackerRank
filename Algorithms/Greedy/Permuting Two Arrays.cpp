#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N,K,i,temp;
    cin>>T;
    vector<int>v1;
    vector<int>v2;
    while(T--){
        cin>>N>>K;
        int counter=0;
        for(i=0;i<N;i++){
            cin>>temp;
            v1.push_back(temp);
        }
        for(i=0;i<N;i++){
            cin>>temp;
            v2.push_back(temp);
        }
        sort(v1.begin(),v1.end());
        sort(v2.rbegin(),v2.rend());
        for(i=0;i<N;i++){
            if((v1[i]+v2[i])<K){
                counter=1;
                break;
            }
        }
        if(counter==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
        v1.clear();
        v2.clear();
    }
    return 0;
}
