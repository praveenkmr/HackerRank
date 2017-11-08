#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    string c=a+b;
    cout<<c<<endl;
    char x=a[0];
    a[0]=b[0];
    b[0]=x;
    cout<<a <<" "<<b<<endl;
    return 0;
}
