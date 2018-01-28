#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,Q;
    cin>>N;
    map<string,int>m;
    string str;
    for(int i=0;i<N;i++){
        cin>>str;
        m[str]+=1;
    }
    cin>>Q;
    for(int i=0;i<Q;i++){
        cin>>str;
        cout<<m[str]<<endl;
    }
    return 0;
}