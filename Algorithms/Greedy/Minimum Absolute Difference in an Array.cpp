#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int> a(N);
    for(int i=0;i<N;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    int diff = abs(a[1]-a[0]);
    for(int i=1;i<N-1;i++)
        if(abs(a[i]-a[i+1]) < diff)
            diff = abs(a[i]-a[i+1]);
    cout<<diff<<endl;
    return 0;
}
