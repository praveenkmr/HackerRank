#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n,ar[1000],v,i=0;
    cin>>v;
    cin>>n;
    while(i<n)
        {
        cin>>ar[i];
        i++;
    }
    i=0;
    while(i<n)
        {
        if (ar[i]==v)
         {
           cout<<i;
            break;
        }
        else
            i++;
        
    }
    return 0;
}
