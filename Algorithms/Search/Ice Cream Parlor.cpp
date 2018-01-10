#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,M,N,temp,a;
    vector<int>v;
    cin>>T;
    while(T--){
        cin>>M>>N;
        for(int i=0;i<N;i++){
            cin>>temp;
            v.push_back(temp);
        }
        int counter=0;
        for(int i=0;i<N;i++){
            a=v[i];
            for(int j=i+1;j<N;j++){
                if(a+v[j]==M){
                    cout<<i+1<<" "<<j+1<<endl;
                    counter=1;
                    break;
                }
            }
            if(counter==1)
                break;
        }
        v.clear();
    }
    return 0;
}
