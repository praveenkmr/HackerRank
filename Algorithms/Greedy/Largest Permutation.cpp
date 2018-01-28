#include<bits/stdc++.h>
using namespace std;
    vector<int>v;
int main(){
    int N,K,i,temp;
    cin>>N>>K;
    for(i=0;i<N;i++){
        cin>>temp;
        v.push_back(temp);
    }
    i=0;
    vector<int>::iterator it=v.begin();
    vector<int>::iterator pos=v.begin();
    while((K>0)&&(i<N)){
        pos=max_element(it,v.end());
        if(v[i]<(*pos)){
            swap(v[i],*pos);
            K--;
        }
        ++i;
        ++it;
    }
    for(i=0;i<N;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
