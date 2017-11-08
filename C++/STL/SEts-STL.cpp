#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int N,temp,x;
    cin>>N;
    set<int>s;
    for(int i=0;i<N;i++){
        cin>>temp;
        if(temp==1){
            cin>>x;
            s.insert(x);
        }
        else if(temp==2){
            cin>>x;
            s.erase(x);
        }
        else{
            cin>>x;
            set<int>::iterator it=s.find(x);
            if(it==s.end())
                cout<<"No\n";
            else
                cout<<"Yes\n";
        }
    }
    return 0;
}
