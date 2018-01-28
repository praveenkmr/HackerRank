#include<bits/stdc++.h>
using namespace std;
int is_prime(int num){
    if(num<=1)
        return 0;
    if(num==2)
        return 1;
    if(num%2==0)
        return 0;
    int root = sqrt(num);
    for(int i=3; i<=root; i+=2)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}
int main(){
    int T;
    scanf("%d",&T);
    vector<long long int >v(50,0);
    v[1]=v[2]=v[3]=1;
    v[4]=2;
    while(T--){
        int N,M=0;
        scanf("%d",&N);
        if(v[N]!=0)
            M=v[N];
        else{
            for(int i=5;i<=N;i++)
                v[i]=v[i-1]+v[i-4];
            M=v[N];
        }
        int res=0;
       for(int i=2;i<=M;i++)
            if(is_prime(i))
                res++;
       cout<<res<<endl;
    }
    return 0;
}
