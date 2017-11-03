#include<bits/stdc++.h>
using namespace std;
int main(){
    long int arr[5];
    long int sum=0;
    long int mini=1000000000;
    long int maxi=-1;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        sum+=arr[i];
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);
    }
    cout<<sum-maxi<<" "<<sum-mini<<endl;
    return 0;
}

