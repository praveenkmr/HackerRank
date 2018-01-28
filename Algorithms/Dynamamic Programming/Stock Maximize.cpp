#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int N,temp;
    cin>>t;
    while(t--){
        cin>>N;
        vector<int>v(N);
        for(int i=0;i<N;i++){
            cin>>v[i];
        }
        long long int profit=0;
        temp=v[N-1];
        for(int i=N-2;i>=0;i--){
            if(temp>v[i]){
                profit+=temp-v[i];
            }
            if(temp<v[i])
                temp=v[i];
        }
        cout<<profit<<endl;
    }
    return 0;
}
