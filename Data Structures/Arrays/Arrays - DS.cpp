#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,temp;
    cin>>N;
    vector<int> v;
    for(int i=0;i<N;i++){
        cin>>temp;
        v.push_back(temp);
    }
    int s=v.size();
    for(s=s-1;s>=0;s--){
        cout<<v[s]<<" ";
    }
    cout<<endl;
    return 0;
}