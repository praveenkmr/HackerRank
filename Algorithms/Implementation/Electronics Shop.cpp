#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,m,n;
    cin >> s >> n >> m;
    vector<int>key_board(n),usb(m);
    for(int i=0;i<n;i++)
        cin>>key_board[i];
    for(int i=0;i<m;i++)
        cin>>usb[i];
    sort(key_board.rbegin(),key_board.rend());
    sort(usb.rbegin(),usb.rend());
    int maximal_cost=-1,flag=0,cost;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cost = key_board[i] + usb[j];
            if((cost <= s) && (cost > maximal_cost)){
                maximal_cost=key_board[i] + usb[j];
            }
        }
    }
    cout<<maximal_cost<<endl;
    return 0;
}