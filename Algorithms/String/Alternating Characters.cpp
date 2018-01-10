#include<bits/stdc++.h>
using namespace std;
int main()
    {
    char str[100005];
    int t;
    cin>>t;
    while(t--)
        {
        cin>>str;
        int l=strlen(str);
        int counter=0;
        for(int i=0;i<l-1;i++)
            {
            if(str[i]==str[i+1])
                {
                counter++;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
