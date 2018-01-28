#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T,N;
    cin>>T;
    while(T--){
        cin>>N;
        int temp,result=0;
        for(int i=0;i<N;i++){
            cin>>temp;
            if(i%2==0)
                result^=temp;
        }
        if(N%2==0)
            cout<<"0\n";
        else
            cout<<result<<endl;
    }
    return 0;
}
