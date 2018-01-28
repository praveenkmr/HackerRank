#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   scanf("%d",&t);
   while(t--){
       int N;
       scanf("%d",&N);
       vector<int>v(N);
       scanf("%d",&v[0]);
       int k=max(0,v[0]);
       int temp;
       int maximum=temp=v[0];
       for(int x=1;x<N;x++){
           scanf("%d",&v[x]);
           temp=max(v[x],temp+v[x]);
           maximum=max(maximum,temp);
           k=max(k,k+v[x]);
       }
       if(maximum<0)
           k=maximum;
       printf("%d %d\n",maximum,k);
   }
   return 0;
}
