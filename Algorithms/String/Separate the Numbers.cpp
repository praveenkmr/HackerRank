#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;
        long first=-1;
        long n;
        bool flag=false;
        for(int i=1;i<=str.length()/2;i++){
            stringstream num(str.substr(0,i));
            num >> n;
            //cout<<n<<endl;
            first=n;
            string temp = to_string(n);
            while(temp.length()<str.length()){
                temp+=to_string(++n);
                //cout<<"temp --->"<<temp<<endl;
            }
            if(temp.compare(str)==0){
                flag=true;
                break;
            }
        }
        if(flag)
            cout<<"YES "<<first<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}