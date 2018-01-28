#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int>arr(N);
    for(int i=0;i<N;i++)
        cin >> arr[i];
    sort(arr.rbegin(),arr.rend());
    long total_miles = 0;
    for(int i=0;i<N;i++){
        total_miles += arr[i]*pow(2,i);
    }
    cout<<total_miles<<endl;
    return 0;
}