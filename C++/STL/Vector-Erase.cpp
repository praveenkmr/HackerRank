#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

vector<int>v;
int main() {
   int N,t1,t2,t3,temp;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>temp;
        v.push_back(temp);
    }
    cin>>t1;
    cin>>t2>>t3;
    if(t1>=t2 && t1<=t3)
        v.erase(v.begin()+t2-1,v.begin()+t3);
    else if(t1<t2){
        v.erase(v.begin()+t2,v.begin()+t3);
        v.erase(v.begin()+t1-1);
    }
    else{
        v.erase(v.begin()+t1-1);
        v.erase(v.begin()+t2-1,v.begin()+t3-1);
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}
