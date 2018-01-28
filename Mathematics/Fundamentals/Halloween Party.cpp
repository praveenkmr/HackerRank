#include<iostream>
using namespace std;
int main()
{
    int t;
    long int n,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
            {
               n=n/2;
               ans=n*n;
               cout<<ans<<endl;
            }
        else
            {
                n=n+1;
                n=n/2;
                ans=n*(n-1);
                cout<<ans<<endl;
            }
    }
    return 0;
}
