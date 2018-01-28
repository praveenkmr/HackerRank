#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,num3,temp,total_s1=0,total_s2=0,total_s3=0;
    cin>>num1>>num2>>num3;
    queue<int>s1,s2,s3;
    for(int i=0;i<num1;i++){
        cin>>temp;
        total_s1+=temp;
        s1.push(temp);
    }
    for(int i=0;i<num2;i++){
        cin>>temp;
        total_s2+=temp;
        s2.push(temp);
    }
    for(int i=0;i<num3;i++){
        cin>>temp;
        total_s3+=temp;
        s3.push(temp);
    }
    while(1){
         if((total_s1==total_s2 && total_s1==total_s3)||(total_s1==0 ||total_s2==0 ||total_s3==0))
            break;
        if(total_s1>=total_s2 && total_s1>=total_s3){
            temp=s1.front();
            s1.pop();
            total_s1-=temp;
        }
        else if(total_s2>=total_s1 && total_s2>=total_s3){
            temp=s2.front();
            s2.pop();
            total_s2-=temp;
        }
        else if(total_s3>=total_s1 && total_s3>=total_s2){
            temp=s3.front();
            s3.pop();
            total_s3-=temp;
        }
        else{}
       
    }
    cout<<min(min(total_s1,total_s2),total_s3)<<endl;
    return 0;
}