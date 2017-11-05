#include<bits/stdc++.h>
using namespace std;
bool sum(int init, vector<int>a,int d, int m){
    int size = a.size();
    int temp_sum=0;
    for(int i=init;i<init+m && i<size;i++){
        temp_sum+=a[i];
    }
    if(temp_sum == d)
        return true;
    else
        return false;
}
int main(){
    int n,m,d,count=0;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>d>>m;
    for(int i=0;i<n;i++){
            if(sum(i,a,d,m))
                count++;
    }
    cout<<count<<endl;
    return 0;
}