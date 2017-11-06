#include<bits/stdc++.h>
using namespace std;
int reverse(int i){
    int temp;
    int num=0;
    while(i){
        temp=i%10;
        num=num*10+temp;
        i=i/10;
    }
    return num;
}
int main(){
    int i,j,k,temp,ans;
    cin>>i>>j>>k;
    int count=0;
    for(int l=i;l<=j;l++){
        temp=reverse(l);
        ans=abs(temp-l)/k;
        if(abs(temp-l)==ans*k)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
