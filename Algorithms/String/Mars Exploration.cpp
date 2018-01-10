#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int length=str.length();
    int counter=0;
    for(int i=0;i<length;i++){
        if((i%3==0 || i%3==2) && str[i]!='S')
            counter++;
        if(i%3==1 && str[i]!='O')
            counter++;
    }
    cout<<counter<<endl;
    return 0;
}