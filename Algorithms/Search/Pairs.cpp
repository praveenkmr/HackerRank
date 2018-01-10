#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,K,temp;
    cin>>N>>K;
    vector<int>v;
    for(int i=0;i<N;i++){
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.rbegin(),v.rend());
    int i=0;
    int counter=0;
    int j=1;
    while(i<v.size()){
        while((v[i]-v[j])<K && j<N-1)
            j+=1;
        if((v[i]-v[j])==K){
            counter+=1;
        }
        else if(j>=N){
            j=1;
        }
        i++;
    }
    cout<<counter<<endl;
    return 0;
}
