#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int c,r,num;
    cin>>r>>c;
    r--;
    c--;
    if(r%2==0)
        num=10*(r/2) + (2*c);
    else
        num=10*(r/2) + (2*c) + 1;
    cout<<num<<endl;
    return 0;
}
