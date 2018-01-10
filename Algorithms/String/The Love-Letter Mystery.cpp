#include<bits/stdc++.h>
using namespace std;
int main()
    {
    int t,i,j;
    char s[10005];
    int counter=0;
    cin>>t;
    while(t--)
        {
        cin>>s;
        counter=0;
        int l=strlen(s);
        for(i=0,j=l-1;i<=j;i++,j--)
            {
            while(s[i]!=s[j])
                {
                if(s[i]>s[j] && s[i]!='a')
                    {
                    s[i]--;;
                    counter++;
                }
                else
                    {
                    s[j]--;
                    counter++;
                }
            }
        }
            cout<<counter<<endl;
    }
    return 0;
}
