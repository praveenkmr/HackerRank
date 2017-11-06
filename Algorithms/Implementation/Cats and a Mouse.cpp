#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int x, y, z;
        cin >> x >> y >> z;
        if(abs(x-z) > abs(y-z))
            cout<<"Cat B"<<endl;
        else if(abs(x-z) < abs(y-z))
            cout<<"Cat A"<<endl;
        else
            cout<<"Mouse C"<<endl;
    }
    return 0;
}