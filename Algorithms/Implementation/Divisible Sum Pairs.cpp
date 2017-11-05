#include<bits/stdc++.h>
using namespace std;
int main(){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0; i<n;i++){
            cin>>a[i];
        }
        int counter=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((a[i]+a[j])%k==0)
                    counter++;
            }
        }
        cout<<counter<<endl;
    return 0;
}