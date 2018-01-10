#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int N=T;
    set<char>s;
    map<char,int>m;
    string str;
    int i;
    while(T--){
        cin>>str;
        for(i=0;i<str.size();i++)
            s.insert(str[i]);
        set<char>::iterator it=s.begin();
        for(it;it!=s.end();it++){
            m[*it]+=1;
        }
        s.clear();
    }
    map<char,int>::iterator iter=m.begin();
    int counter=0;
    for(iter;iter!=m.end();iter++){
        if(iter->second==N)
            counter++;
    }
    cout<<counter<<endl;
    return 0;
}
