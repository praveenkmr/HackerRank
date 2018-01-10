#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    vector<int> v;
    int t,test;
    cin >>t;
    for(int i=0;i<t;i++){
        cin>> test;
        v.push_back(test);
    }
    sort(v.begin(),v.end());
    vector<int>::iterator it=v.begin();
    for(it;it!=v.end();++it){
        cout <<*it<<" ";
    }
    return 0;
}
