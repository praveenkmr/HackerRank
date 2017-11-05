#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s,t,m,n,a,b,temp;
    cin>>s>>t>>a>>b>>m>>n;
    int orange_count=0,apple_count=0;
    for(int i=0;i<m;i++){
        cin>>temp;
        if(temp+a >= s && temp+a <=t)
            apple_count++;
    }
    for(int i=0;i<n;i++){
        cin>>temp;
        if(b+temp <=t && b+temp >= s)
            orange_count++;
    }
    cout<<apple_count<<endl<<orange_count<<endl;
    return 0;
}
