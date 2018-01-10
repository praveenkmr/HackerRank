#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
static int ar[100];
int main() {
    long i,n,temp;
    cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>temp;
        ar[temp]+=1;
    }
    for(i=0;i<100;i++)
        cout<<ar[i]<<" ";
    return 0;
}
