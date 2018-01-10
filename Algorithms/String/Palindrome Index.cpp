#include<bits/stdc++.h>
using namespace std;
int check(string str,int i,int j){
    if(str[i]==str[j-1] && str[i+1]==str[j-2])
        return j;
    if(str[i+1]==str[j] && str[i+2]==str[j-1])
        return i;
    return -1;
}
int main(){
    //freopen("input.txt","r",stdin);
    int T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;
        int flag=-1;
        for(int i=0,j=str.length()-1;i<=j;i++,j--){
            if(str[i]!=str[j]){
                flag=check(str,i,j);
                break;
            }
        }
        cout<<flag<<endl;
    }
    return 0;
}
