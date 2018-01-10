#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
void findPalind(char *arr)
{
   static int a[26];
    int flag = 0,len,i;
    int temp;
    len=strlen(arr);
   for(i=0;i<len;i++){
       temp=arr[i]-'a';
       a[temp]+=1;
   }
    int counter=0;
    for(i=0;i<26;i++)
        {
        if(a[i]%2!=0)
            counter++;
    }
    if((counter==1 && len%2!=0)||(counter==0 && len%2==0))
        flag=0;
    else
        flag=1;
    if (flag==0)
        printf("YES\n");
    else
        printf("NO\n");
}
int main() {

    char arr[100001];
    scanf("%s",arr);
    findPalind(arr);
    return 0;
}
