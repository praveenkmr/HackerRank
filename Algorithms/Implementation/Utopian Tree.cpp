#include<iostream>
using namespace std;

int height(int n) 
{
    int i=0,h=0;
    while(i<=n)
        {
       
        if(i%2==0)
        {
            h=h+1;
        }
        else
        {
            h=2*h;
        }
        i++;
    }
    return h;
}
int main() {
    int T,h;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        h=height(n);
        cout << h << endl;
    }
    return 0;
}
