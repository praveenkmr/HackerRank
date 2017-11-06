#include<bits/stdc++.h>
using namespace std;
int main(){
    int all_matrix[8][9] = {
                    {8,1,6,3,5,7,4,9,2},
                    {6,1,8,7,5,3,2,9,4},
                    {4,9,2,3,5,7,8,1,6},
                    {2,9,4,7,5,3,6,1,8}, 
                    {8,3,4,1,5,9,6,7,2},
                    {4,3,8,9,5,1,2,7,6}, 
                    {6,7,2,1,5,9,8,3,4}, 
                    {2,7,6,9,5,1,4,3,8}
    };
    int mat[9];
    int diff=999999999;
    for(int i=0;i<9;i++)
        cin>>mat[i];
    for(int i=0;i<8;i++){
        int temp=0;
        for(int j=0;j<9;j++)
            temp+=abs(all_matrix[i][j]-mat[j]);
        diff = min(diff,temp);
    }
    cout<<diff<<endl;
    return 0;
}