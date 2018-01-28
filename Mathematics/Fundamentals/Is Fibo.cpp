#include<bits/stdc++.h>
using namespace std;
int main()
    {
    int t;
    long int temp,n,a,b;
    cin >> t;
    while(t--)
        {
        cin>>n;
        a=0;
        b=1;
        int counter=0;
        do
        {
            temp=a+b;
            a=b;
            b=temp;
            if(temp==n)
                {
                counter=1;
                break;
            }
        }while(temp<n);
        if(counter==1)
            {
            cout<<"IsFibo"<<endl;
            }
        else
            {
                cout<<"IsNotFibo"<<endl;
            }
        
        }
    return 0;
}
