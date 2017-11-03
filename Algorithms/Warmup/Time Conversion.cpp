#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,temp,i;
    char str1[11];
    cin>>str1;
    if(str1[8]=='P'){
            temp=(str1[0]-'0')*10+(str1[1]-'0');
            if(temp==12){}
            else{
                temp=(temp+12)%24;
            }
            str1[1]=(temp%10)+'0';
            temp/=10;
            str1[0]=temp+'0';
            str1[8]='\0';
    }
    else{
        temp=((str1[0]-'0')*10+(str1[1]-'0'))%12;
            str1[1]=(temp%10)+'0';
            temp/=10;
            str1[0]=temp+'0';
            str1[8]='\0';
    }
    cout<<str1<<endl;
    return 0;
}
