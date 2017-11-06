#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    char ch;
    int level=0,valley=0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>ch;
        if(ch=='U')
            level++;
        else
            level--;
        if(level==0 && ch=='U')
            valley++;
    }
    cout<<valley<<endl;
    return 0;
}