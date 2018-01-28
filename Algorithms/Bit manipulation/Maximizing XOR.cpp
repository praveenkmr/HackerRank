#include<bits/stdc++.h>
using namespace std;
int main()
    {
    int a,b;
    cin>>a>>b;
    int temp=0;
    for(int i=a;i<=b;i++)
        {
        for(int j=a;j<=b;j++)
            {
            int x=i^j;
            if(x>temp)
                {
                temp=x;
            }
        }
    }
    cout<<temp<<endl;
    return 0;
}
