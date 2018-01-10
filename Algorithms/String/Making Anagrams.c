#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    static int a[26],b[26];
    char str1[10001];
    char str2[10001];
    int i,temp;
    scanf("%s%s",str1,str2);
    int l1=strlen(str1);
    int l2=strlen(str2);
    for(i=0;i<l1;i++){
        temp=str1[i]-'a';
        a[temp]+=1;
    }
    for(i=0;i<l2;i++){
        temp=str2[i]-'a';
        b[temp]+=1;
    }
    int res=0;
    for(i=0;i<26;i++){
        res+=abs(a[i]-b[i]);
    }
    printf("%d\n",res);
    return 0;
}
