#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int ax,bx,ay,by;
        cin>>ax>>ay>>bx>>by;
        int x=2*bx-ax;
        int y=2*by-ay;
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}