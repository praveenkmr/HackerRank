#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        map<int,long long int>m;
        int temp;
        for(int i=0;i<N;i++){
            cin>>temp;
            m[temp]+=1;
        }
        map<int,long long int>::iterator it;
        long long int counter=0;
        for(it=m.begin();it!=m.end();++it){
            counter+=(it->second)*((it->second)-1);
        }
        cout<<counter<<endl;
    }
    return 0;
}
