#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int x1;
    int v1;
    int x2;
    int v2;
    int counter=0;
    cin >> x1 >> v1 >> x2 >> v2;
    int hop_x1=x1,hop_x2=x2,diff=abs(hop_x1-hop_x2);
    while(hop_x1!=hop_x2){
        hop_x1+=v1;
        hop_x2+=v2;
        if(abs(hop_x1-hop_x2)<=diff && v1!=v2){
            diff=abs(hop_x1-hop_x2);
        }
        else{
            counter=1;
            break;
        }
    }
    if(counter==1)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}
