#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        vector<int>v(N);
        for(int i=0;i<N;i++)
            cin>>v[i];
        int i=0,j=N-1;
        long sum_i=0,sum_j=0;
        while(j-i>=1){
            if(sum_i<sum_j){
                sum_i+=v[i];
                i++;
            }
            else if(sum_i>sum_j){
                sum_j+=v[j];
                j--;
            }
            else{
                sum_i+=v[i];
                sum_j+=v[j];
                i++;
                j--;
            }
        }
        if(sum_i==sum_j)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
