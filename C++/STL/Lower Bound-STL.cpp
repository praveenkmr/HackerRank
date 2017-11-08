#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin>>N;
    vector<int>v(N);
    for(int i=0;i<N;i++){
        cin>>v[i];
    }
    int Q,x;
    vector<int>::iterator low;
    cin>>Q;
    while(Q--){
        cin>>x;
        low=lower_bound(v.begin(),v.end(),x);
        if(*low==x)
            cout<<"Yes "<<low-v.begin()+1<<endl;
        else
            cout<<"No "<<low-v.begin()+1<<endl;
    }
    return 0;
}
