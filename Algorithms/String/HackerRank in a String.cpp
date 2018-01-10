#include<bits/stdc++.h>
using namespace std;
string checkString(string s){
    string str="hackerrank";
    if(s.length() < str.length())
        return "NO";
    int j=0;
    for(int i=0;i<s.length();i++){
        if(j<str.length() && s[i]==str[j])
            j++;
    }
    if(j==str.length())
        return "YES";
    else
        return "NO";
}
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        cout<<checkString(s)<<endl;
    }
    return 0;
}