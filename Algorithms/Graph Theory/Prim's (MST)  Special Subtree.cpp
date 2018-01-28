#include <bits/stdc++.h>
using namespace std;
const int MAX = 3000;
typedef pair<long long, int> PII;
bool visited[MAX];
vector <PII> adj[MAX];

long long prim(int x){
    priority_queue<PII, vector<PII>, greater<PII> > Q;
    int y;
    long long min_cost = 0;
    PII p;
    Q.push(make_pair(0, x));
    while(!Q.empty()){
        p=Q.top();
        Q.pop();
        x=p.second;
        if(visited[x]==true)
            continue;
        min_cost=min_cost+p.first;
        visited[x]=true;
        for(int i=0;i<adj[x].size();++i){
            y=adj[x][i].second;
            if(visited[y]==false)
                Q.push(adj[x][i]);
        }
    }
    return min_cost;
}

int main(){
    int nodes,edges,x,y,weight;
    long long min_cost;
    cin>>nodes>>edges;
    for(int i=0;i<edges;++i){
        cin>>x>>y>>weight;
        adj[x].push_back(make_pair(weight,y));
        adj[y].push_back(make_pair(weight,x));
    }
    int start;
    cin>>start;
    min_cost=prim(start);
    cout<<min_cost<<endl;
    return 0;
}

