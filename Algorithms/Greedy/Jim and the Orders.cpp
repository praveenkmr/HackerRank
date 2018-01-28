#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,i,temp,temp1;
    vector<int>v,v1;
    cin>>N;
    for(i=0;i<N;i++){
        cin>>temp>>temp1;
        v.push_back(temp+temp1);
        v1.push_back(temp+temp1);
    }
    sort(v1.begin(),v1.end());
    vector<int>::iterator it;
    int pos;
    for(i=0;i<N;i++){
        it=find(v.begin(),v.end(),v1[i]);
        pos=(it-v.begin())+1;
        *it=numeric_limits<int>::max();
        cout<<pos<<" ";
    }
    return 0;
}
