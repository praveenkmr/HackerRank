#include<bits/stdc++.h>
using namespace std;
int main(){
    int width[26];
    string word;
    for(int i=0;i<26;i++){
        cin>>width[i];
    }
    cin.ignore();
    cin>>word;
    int max_width=0;
    for(int i=0;i<word.length();i++){
        max_width=max(max_width,width[word[i]-'a']);
    }
    int area = max_width*word.length();
    cout<<area<<endl;
    return 0;
}
