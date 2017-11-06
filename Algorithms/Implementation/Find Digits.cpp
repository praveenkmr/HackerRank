#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long int num;
    cin>>t;
    while(t--)
        {
        cin>> num;
        int counter=0;
        long long int temp=num;
        while(num>0)
            {
            int x=num%10;
            num=num/10;
            if(x!=0)
                {
                if(temp%x==0)
                    {
                    counter++;
                    }
                }
            }
        cout<<counter<<endl;
        }
    return 0;
}
