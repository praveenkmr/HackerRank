#include<iostream>
using namespace std;
int main(){
    int N,i,j,k;
    cin>>N;
    for(i=1;i<=N;i++){
        for(j=1;j<=N-i;j++)
            cout<<" ";
        for(k=1;k<=i;k++)
            cout<<"#";
        cout<<endl;
    }
    return 0;
}
