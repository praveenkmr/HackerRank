#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,K,i;
    char temp;
    cin>>N;
    char str[N+1];
    cin>>str;
    cin>>K;
    for(i=0;str[i]!='\0';i++){
            if((str[i]<='z' && str[i]>='a'))
                str[i]=(str[i]+K-'a')%26+'a';
            if(str[i]<='Z' && str[i]>='A')
                str[i]=(str[i]+K-'A')%26+'A';
    }
    cout<<str<<endl;
    return 0;
}
