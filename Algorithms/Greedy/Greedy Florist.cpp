#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,K,i;
    cin>>N>>K;
    vector<int>v;
    int temp;
    for(i=0;i<N;i++){
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.rbegin(),v.rend());
    int x=-1;
    long long int cost=0;
    for(i=0;i<N;i++){
        if(i%K==0)
            x++;
        cost+=(x+1)*v[i];
    }
    cout<<cost<<endl;
    return 0;
}
