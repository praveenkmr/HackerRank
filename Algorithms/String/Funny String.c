#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[10002],temp[10002];
    int i,j,l,t,flag=0,a,b;
    scanf("%d",&t);
    while(t--){
        flag=0;
        scanf("%s",str);
        l=strlen(str);
        for(i=0,j=l-1;i<l;i++,j--){
            temp[i]=str[j];
        }
        temp[l]='\0';
   //     printf("%s\n%s",str,temp);
       for(i=1;i<l;i++){
           if(abs(str[i]-str[i-1])!=abs(temp[i]-temp[i-1])){
                flag=1;
                break;
            }
       }
       if(flag==1)
            printf("Not Funny\n");
        else
            printf("Funny\n");
    }
    return 0;
}
