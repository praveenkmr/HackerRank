#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,i;
    cin>>T;
    string str1,str2;
    while(T--){
        getchar();
        cin>>str1;
        getchar();
        cin>>str2;
        int a[26],b[26];
        for(i=0;i<26;i++)
            a[i]=b[i]=0;
        for(i=0;i<str1.length();i++)
            a[str1[i]-'a']+=1;
        for(i=0;i<str2.length();i++)
            b[str2[i]-'a']+=1;
        int counter=0;
        for(i=0;i<26;i++){
            if(a[i]>0 && b[i]>0)
                counter+=1;
            if(counter>0)
                break;
        }
        if(counter==0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
