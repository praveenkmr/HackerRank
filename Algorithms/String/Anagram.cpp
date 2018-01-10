#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    string str;
    cin>>T;
    while(T--){
        getchar();
        cin>>str;
        int len=str.length();
        if(len%2==1){
            cout<<"-1"<<endl;
        }
        else{
            int counter=0;
            int c1[26],c2[26];
            for(int i=0;i<26;i++)
                c1[i]=c2[i]=0;
            string str1=str.substr(0,len/2);
            string str2=str.substr(len/2,len/2);
            for(int i=0;i<str2.length();i++){
                    c1[str1[i]-'a']+=1;
                    c2[str2[i]-'a']+=1;
            }
            for(int i=0;i<26;i++){
                counter+=abs(c1[i]-c2[i]);
            }
            counter/=2;
            cout<<counter<<endl;
        }
    }
    return 0;
}
