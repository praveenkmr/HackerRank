#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp;
    cin>>n;
    int max=-1;
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>temp;
        m[temp]+=1;
        if(temp>max)
            max=temp;
    }
    cout<<m[max]<<endl;
    return 0;
}
