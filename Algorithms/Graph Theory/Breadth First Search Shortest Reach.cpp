#include<bits/stdc++.h>
using namespace std;
void BFS(vector<list<int> > &AdjList,int i){
    vector<bool>visited(AdjList.size(),false);
    vector<int>cost(AdjList.size(),-1);
    queue<int>Queue;
    visited[i]=true;
    int c=0;
    cost[i]=0;
    Queue.push(i);
    int j;
    while(!Queue.empty()){
        j=Queue.front();
        Queue.pop();
        list<int>::iterator it=AdjList[j].begin();
        for(it;it!=AdjList[j].end();++it){
            if(visited[*it]==false){
                visited[*it]=true;
                Queue.push(*it);
                cost[*it]=cost[j]+6;
            }
        }
    }
    for(int j=0;j<AdjList.size();++j){
        if(j!=i)
            cout<<cost[j]<<" ";
    }
    cout<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int v1,v2,Edges,vertices;
        cin>>vertices;
        cin>>Edges;
        vector<list<int > > AdjList(vertices);
        for(int i=0;i<Edges;++i){
            cin>>v1>>v2;
            AdjList[v1-1].push_back(v2-1);
            AdjList[v2-1].push_back(v1-1);
        }
        int x;
        cin>>x;
        BFS(AdjList,x-1);
    }
    return 0;
}
