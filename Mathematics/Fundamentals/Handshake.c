#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,i;
    long n,fact;
    scanf("%d",&t);
    while(t--){
        scanf("%ld",&n);
        fact=n*(n-1)/2;
        printf("%ld\n",fact);
    }
    return 0;
}
