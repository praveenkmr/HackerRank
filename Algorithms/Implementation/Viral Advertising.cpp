#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,init=5,value,floor;
    int total=0;
    cin>>n;
    for(int i=0;i<n;i++){
        floor = init/2;
        value = init-floor;
        init=3*floor;
        total+=floor;
    }
    cout<<total<<endl;
    return 0;
}
