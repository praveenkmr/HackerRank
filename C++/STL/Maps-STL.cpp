#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin>>N;
    string temp2;
    int temp,num;
    map<string,int>m;
    for(int i=0;i<N;i++){
        cin>>temp;
        if(temp==1){
            cin>>temp2>>num;
            m[temp2]+=num;
        }
        else if(temp==2){
            cin>>temp2;
            m[temp2]=0;
        }
        else{
            cin>>temp2;
            map<string,int>::iterator it=m.find(temp2);
            if(it==m.end())
                cout<<0<<endl;
            else
                cout<<it->second<<endl;
        }
    }
    return 0;
}
