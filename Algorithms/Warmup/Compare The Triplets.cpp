#include<bits/stdc++.h>
using namespace std;

int main(){
    int a0,a1,a2,b0,b1,b2;
    cin>>a0>>a1>>a2>>b0>>b1>>b2;
    int alice=0;
    int bob=0;
    if(a0>b0)
          alice++;
    if(a1>b1)
          alice++;
    if(a2>b2)
          alice++;
    if(a0<b0)
          bob++;
    if(a1<b1)
          bob++;
    if(a2<b2)
          bob++;
    cout<<alice<<" "<<bob;
    return 0;
}
