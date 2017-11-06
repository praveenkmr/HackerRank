#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,temp;
    cin>>N;
    map<int,int>m;
    for(int i=0;i<N;i++){
        cin>>temp;
        m[temp]++;
    }
    int maximum_pair=-1,maximum,count;
    map<int,int>::iterator it,it1;
    it=it1=m.begin();
    maximum = it->second;
    for(it=++it;it!=m.end();it++){
        if(abs(it->first - it1->first) == 1){
            count=it->second + it1->second;
            maximum_pair = max(count,maximum_pair);
        }
        maximum = max(maximum,it->second);
        it1++;
    }
    cout<<max(maximum,maximum_pair)<<endl;
    return 0;
}