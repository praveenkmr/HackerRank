#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,R;
    cin>>N>>R;
    vector<int>v(N);
    for(int i=0;i<N;i++)
        cin>>v[i];
    int index = R%N;
    for(int i=index,ct=0;ct<v.size();ct++,i=(i+1)%N){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}