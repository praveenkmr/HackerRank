#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,K,Q,temp;
    cin>>N>>K>>Q;
    deque<int> q;
    for(int i=0;i<N;i++){
        cin>>temp;
        q.push_back(temp);
    }
    while(K--){
        temp=q.back();
        q.pop_back();
        q.push_front(temp);
    }
    for(int i=0;i<Q;i++){
        cin>>temp;
        cout<<q[temp]<<endl;
    }
    return 0;
}
