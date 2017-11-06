#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>cloud(n);
    for(int i=0;i<n;i++)
        cin>>cloud[i];
    int counter=0;
    int value=100;
    do{
        counter=(counter+k)%n;
        if(cloud[counter]==1)
            value=value-3;
        else
            value-=1;
    }while(counter!=0);
    cout<<value<<endl;
    return 0;
}