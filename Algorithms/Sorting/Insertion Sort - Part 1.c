#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int N, int arr[]) {
    int i=N-1,j,k;
    int value;
        value=arr[i];
        j=i-1;
        while(j>=0 && value<arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
         for(k=0;k<N;k++)
            printf("%d ",arr[k]);
          printf("\n");
        }
        arr[j+1]=value;
       for(k=0;k<N;k++)
             printf("%d ",arr[k]);
       printf("\n");
           
}
int main(void) {

    int N;
    scanf("%d", &N);
    int arr[N], i;
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(N, arr);

    return 0;
}