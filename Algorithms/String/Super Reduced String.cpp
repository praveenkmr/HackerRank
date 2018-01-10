#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int flag=1;
    cin>>str;
    while(flag==1){
        flag=0;
        for(int i=0;str.length()>0 && i<str.length()-1;i++){
            if(str[i]==str[i+1]){
                str.erase(i,2);
                flag=1;
            }
        }
    }
    if(str.length()==0)
        cout<<"Empty String\n";
    else
        cout<<str<<endl;
    return 0;
}