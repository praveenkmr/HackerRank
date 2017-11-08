#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   int a;
    char ch;
    vector<int>x;
    stringstream ss(str);
    while(ss >> a){
        ss>>ch;
        x.push_back(a);
    }
    return x;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
