#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,l,b;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d",&l,&b);
        int j=0;
        int ans=0;
        int m=min(l,b);
        for(int i=1;i<=m;i++){
            if(l%i==0 && b%i==0)
                if(i>=j){
                    ans=((l/i)*(b/i));
                    j=i;
                }
        }
        cout<<ans<<endl;
    }
    return 0;
}
