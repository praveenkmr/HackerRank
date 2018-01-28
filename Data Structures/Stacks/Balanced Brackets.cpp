#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    char ch;
    string str;
    for(int i=0;i<N;i++){
        cin>>str;
        stack<char>s;
        for(int j=0;j<str.size();j++){
            ch=str[j];
            if(s.empty())
                s.push(ch);
            else if(s.top()=='(' && ch==')' )
                s.pop();
            else if(s.top()=='{' && ch=='}')
                s.pop();
            else if(s.top()=='[' && ch==']')
                s.pop();
            else
                s.push(ch);
        }
        if(s.empty())
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}