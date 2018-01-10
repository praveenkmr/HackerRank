#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>
int main() {

    char str[1003];
    static char alpha[26];
    int t,i,flag;
        flag=0;
        scanf("%[^\n]",str);
        for(i=0;str[i]!='\0';i++){
            alpha[(tolower(str[i])-'a')]=1;
        }
        for(i=0;i<26;i++){
            if(alpha[i]==0)
                {
                flag=1;
                break;
            }
        }
        if(flag==1)
            printf("not pangram\n");
        else
           printf("pangram\n");
    return 0;
}