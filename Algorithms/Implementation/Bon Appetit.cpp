#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,K;
    cin>>N>>K;
    int charged=0,actual=0,temp;
    for(int i=0;i<N;i++){
        cin>>temp;
        if(i!=K)
            actual+=temp;
    }
    actual/=2;
    cin>>charged;
    if(charged==actual)
        cout<<"Bon Appetit\n";
    else
        cout<<abs(charged-actual)<<endl;
    return 0;
}
