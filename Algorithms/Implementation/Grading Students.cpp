#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,marks,remainder;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>marks;
        remainder = marks%5 ;
        if((remainder > 2)&&(marks > 37)){
            marks += (5-remainder); 
        }
        cout<<marks<<endl;
    }
    return 0;
}