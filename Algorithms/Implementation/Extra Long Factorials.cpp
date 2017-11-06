#include<iostream>
using namespace std;
int factorial(int fact[],int i,int f_size){
    int carry=0,j,temp;
    for(j=0;j<f_size;j++){
        temp=fact[j]*i+carry;
        fact[j]=temp%10;
        carry=temp/10;
    }
    while(carry){
        fact[f_size]=carry%10;
        carry/=10;
        ++f_size;
    }
    return f_size;
}
int main(){
    int fact[1000];
    int f_size=1;
    fact[0]=1;
    int N,i;
    cin>>N;
    for(i=2;i<=N;i++)
        f_size=factorial(fact,i,f_size);
    for(i=f_size-1;i>=0;i--)
        cout<<fact[i];
    cout<<endl;
}
