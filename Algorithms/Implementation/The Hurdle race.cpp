#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,count=0,temp,diff;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp > k){
            diff = temp - k;
            count+=diff;
            k += diff;
        }
    }
    cout<<count<<endl;
    return 0;
}