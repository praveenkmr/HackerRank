#include<bits/stdc++.h>
using namespace std;
int mat[10][10];
bool visit[10][10];
int N,M;
int bfs(int i,int j){
    queue<pair<int, int> >q;
    q.push(make_pair(i,j));
    int k=0;
    while(!q.empty()){
        pair<int,int> current=q.front();
        q.pop();
        
        if(visit[current.first][current.second])
                continue;
        visit[current.first][current.second]=true;
        k++;
        
        for(int di=-1;di<=1;di++){
            for(int dj=-1;dj<=1;dj++){
                int ci=current.first + di;
                int cj=current.second + dj;
                if(ci >=0 && ci<N && cj >=0 && cj<M && mat[ci][cj] && !visit[ci][cj] )
                    q.push(make_pair(ci,cj));
            }
        }
    }
    return k;
}
int main() {
    cin>>N>>M;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++)
            cin>>mat[i][j];
    }
    int ans=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(mat[i][j] && !visit[i][j])
                        ans=max(ans,bfs(i,j));
        }
    }
    cout<<ans<<endl;
    return 0;
}
