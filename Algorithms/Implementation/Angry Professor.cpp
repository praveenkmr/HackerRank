#include<bits/stdc++.h>
using namespace std;
int main()
    {
    int t,n,k,temp;
    cin>>t;
    while(t--)
        {
        cin>>n;
        cin>>k;
        int counter=0;
        for(int i=0;i<n;i++)
            {
            cin>>temp;
            if(temp<1)
                {
                counter=counter+1;
            }
        }
        if(counter<k)
            {
            cout<<"YES"<<endl;
        }
        else
            {
               cout<<"NO"<<endl;
        }
    }
    return 0;
}
