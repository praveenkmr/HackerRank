#include<bits/stdc++.h>
using namespace std;
bool check_a(int num, vector<int>a){
    int a_size=a.size();
    for(int i=0;i<a_size;i++){
        if(num%a[i] !=0)
            return false;
    }
    return true;
}
bool check_b(int num,vector<int>b){
    int b_size=b.size();
    for(int i=0;i<b_size;i++){
        if(b[i]%num !=0)
            return false;
    }
    return true;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int count_=0;
    for(int i=a[n-1];i<=b[0];i++){
        if(check_a(i,a) && check_b(i,b)){
            count_++;
        }
    }
    cout<<count_<<endl;
    return 0;
}