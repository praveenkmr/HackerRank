#include<bits/stdc++.h>
using namespace std;
int main()
    {
    long long int n,m,a,b,k,sum=0;
    cin>>n>>m;
    while(m--)
        {
        cin>>a>>b>>k;
        sum=sum+((b-a+1)*k);
    }
    cout<<sum/n<<endl;
    return 0;
}
