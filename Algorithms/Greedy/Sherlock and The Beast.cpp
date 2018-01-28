#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,T,i;
    cin>>T;
    while(T--){
        cin>>N;
        if(N<3)
            cout<<"-1";
        else{
            if(N%3==0)
                for(i=0;i<N;i++)
                    cout<<"5";
            else{
                for(int j=1;j<N;j++){
                    int temp=N-5*j;
                    if((temp%3==0)&&(temp>=0)){
                         for(i=0;i<temp;i++)
                               cout<<"5";
                         for(i=0;i<5*j;i++)
                               cout<<"3";
                               break;
                    }
                    if(temp<0){
                        cout<<"-1";
                        break;
                    }  
               }
           }
        }
       cout<<endl;
    }
    return 0;
}
