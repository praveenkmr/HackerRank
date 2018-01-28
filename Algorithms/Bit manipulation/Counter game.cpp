#include<bits/stdc++.h>
using namespace std;
int is_power_of_two(unsigned long long x) {
    return x && (x & (x - 1)) == 0;
}

#define MAX 64

int main(){
    int T, counter;
    unsigned long long int i, n, power[64];
    power[0] = 1;
    for (i = 1; i < MAX; i++)
        power[i] = power[i - 1] * 2;    
    cin>>T;
    while (T--) {
        cin >> n;
        counter = 1;
        while (n > 1) {
            if (is_power_of_two(n)) {
                n /= 2;
                counter++;
            } 
            else {
                for (i = 1; i < MAX; i++) {
                    if (n < power[i]) {
                        break;
                    }
                }
                n -= power[i - 1];
                counter++;
            }
        }
        if (counter % 2 == 0)
            printf("Louise\n"); 
        else
            printf("Richard\n");
    }
    return 0;
}