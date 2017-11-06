#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,temp;
    cin>>N;
    vector<int> v(N+1);
    for(int i=1;i<=N;i++){
        cin>>temp;
        v[temp]=i;
    }
    for(int i=1;i<=N;i++){
        cout<<v[v[i]]<<endl;
    }
        
    return 0;
}