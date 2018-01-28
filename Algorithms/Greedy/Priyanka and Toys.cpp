#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int temp;
    vector<int>v;
    for(int i=0;i<N;i++){
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int buy=1;
    temp=v[0];
    for(int i=1;i<N;i++){
        if(v[i]>temp+4){
            buy++;
            temp=v[i];
        }
    }
    cout<<buy<<endl;
    return 0;
}