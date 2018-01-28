#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,i,n,temp;
    long total;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        total=1;
        for(i=1;i<n;i++){
            scanf("%d",&temp);
            total=total*temp;
            total=total%1234567;
        }
        printf("%ld\n",total);
    }  
    return 0;
}
