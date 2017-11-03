#include<iostream>
using namespace std;
int main(){
    long long int sum=0,i;
    int n;
    cin>>n;
    while(n--){
        cin>>i;
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}
