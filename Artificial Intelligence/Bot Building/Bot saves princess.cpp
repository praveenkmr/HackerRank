#include <iostream>
#include <vector>
using namespace std;
void displayPathtoPrincess(int n, vector <string> grid){
    if(grid[0][0]=='p'){
        int i=n/2;
        for(int k=0;k<i;k++)
            cout<<"UP"<<endl<<"LEFT"<<endl;
    }
    else if(grid[0].size()-1=='p'){
        int i=n/2;
        for(int k=0;k<i;k++)
            cout<<"UP"<<endl<<"RIGHT"<<endl;
    }
    else if(grid[n-1][0]=='p'){
        int i=n/2;
        for(int k=0;k<i;k++)
            cout<<"DOWN"<<endl<<"LEFT"<<endl;
    }
    else{
        int i=n/2;
        for(int k=0;k<i;k++)
            cout<<"DOWN"<<endl<<"RIGHT"<<endl;
    }
        
}
int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; 
        cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
