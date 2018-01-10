#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int i,n,temp;
    cin >> n;
    for(i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int l=v.size();
    vector<int>::iterator it=v.begin()+l/2;

    cout<<*it<<endl;
    return 0;
}
