#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int power(int N){
    int num=1;
    for(int i=1;i<=N;i++)
        num=(num*2)%100000;
    return num;
}

int main() {
   int T,N;
    cin>>T;
    while(T--){
        cin>>N;
        cout<<(power(N)-1)%100000<<endl;
    }
    return 0;
}
