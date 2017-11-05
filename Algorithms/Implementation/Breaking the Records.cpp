#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,temp,max,min,count_max=0,count_min=0,num;
    cin>>N;
    cin>>temp;
    max=min=temp;
    for(int i=0;i<N-1;i++){
        cin>>num;
        if(num > max){
            count_max++;
            max=num;
        }
        else if(num < min){
            count_min++;
            min = num;
        }
    }
    cout<<count_max<<" "<<count_min<<endl;
    return 0;
}