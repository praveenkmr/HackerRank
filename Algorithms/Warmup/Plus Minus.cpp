#include<bits/stdc++.h>
using namespace std;
int main(){
    int pos=0,neg=0,zero=0,n,i,temp;
    cin>>n;
    temp=n;
    while(n--){
        cin>>i;
        if(i==0)
            zero++;
        else if(i>0)
            pos++;
        else
            neg++;
    }
    float f_pos=(float)pos/temp;
    float f_neg=(float)neg/temp;
    float f_zero=(float)zero/temp;
    printf("%.3f\n%.3f\n%.3f",f_pos,f_neg,f_zero);
    return 0;
}

