#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,op,value,max_value = 0;
    cin>>T;
    stack<pair<int,int> >s;
    while(T--){
        cin>>op;
        switch(op){
            case 1:
                cin>>value;
                max_value = max(max_value,value);
                s.push(make_pair(value,max_value));
                break;
            case 2:
                s.pop();
                if(s.empty()){
                    max_value=0;
                }
                else{
                    max_value = s.top().second;
                }
                break;
            case 3:cout<<s.top().second<<endl;
        }
    }
    return 0;
}