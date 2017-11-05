#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp;
    cin>>n;
    vector<int>a(6);
    for(int i=0;i<6;i++)
        a[i]=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        a[temp]++;
    }
    int max_count=-1,index=-1;
    for(int i=1;i<=5;i++){
        if(a[i] > max_count){
            max_count=a[i];
            index = i;
        }
    }
    cout<<index<<endl;
    return 0;
}