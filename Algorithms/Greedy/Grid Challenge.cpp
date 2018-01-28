#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>v;
    string s;
    int T,N;
    cin>>T;
    while(T--){
        cin>>N;
        getchar();
        for(int i=0;i<N;i++){
            cin>>s;
            v.push_back(s);
            sort(v[i].begin(),v[i].end());
        }
        int counter=0;
        for(int i=0;i<N;i++){
           for(int j=0;j<N-1;j++)
               if(v[j][i] > v[j+1][i]){
                    counter=1; 
                    break;
                }
        }
        if(counter==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        v.clear();
    }
    return 0;
}
