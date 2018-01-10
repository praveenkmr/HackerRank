#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    string str;
    cin>>T;
    while(T--){
        set<char>s;
        cin>>str;
        for(int i=0;i<str.length();i++){
            s.insert(str[i]);
        }
        cout<<s.size()<<endl;
    }
    return 0;
}