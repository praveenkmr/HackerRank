#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,K,luck,match,count=0;
    cin>>N>>K;
    vector<pair<int,int> > arr;
    for(int i=0;i<N;i++){
        cin>>luck>>match;
        arr.push_back(make_pair(luck,match));
    }
    sort(arr.rbegin(),arr.rend());
    vector<pair<int,int> >::iterator it;
    int total_luck=0;
    for(it=arr.begin();it!=arr.end();it++){
        if(count<K && it->second==1){
            total_luck+=it->first;
            count++;
        }
        else if(it->second==0)
            total_luck+=it->first;
        else{
            total_luck-=it->first;
        }
    }
    cout<<total_luck<<endl;
    return 0;
}