#include<bits/stdc++.h>

using namespace std;


int main(){
    string s;
    cin >> s;
    int count=1;
    for(int i=0;i<s.length();i++){
        if(isupper(s[i]))
            count++;
    }
    cout<<count<<endl;
    return 0;
}