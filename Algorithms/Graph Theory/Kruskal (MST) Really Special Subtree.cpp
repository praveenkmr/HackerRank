#include<bits/stdc++.h>
using namespace std;
int FINDSET(vector<int>&a,int i){
    while(a[i]!=i)
        i=a[i];
    return i;
}
void UNION(vector<int>&a,int i,int j){
    int root_A = FINDSET(a, i);
    int root_B = FINDSET(a, j);
    a[ root_A ] = root_B ;
}
int main(){
    int nodes,edges,v1,v2,weight;
    cin>>nodes>>edges;
    vector<pair<int,pair<int,int> > >G_Edges;
    for(int i=0;i<edges;++i){
        cin>>v1>>v2>>weight;
        G_Edges.push_back(make_pair(weight,make_pair(v1-1,v2-1)));
    }
    int temp;
    cin>>temp;
    sort(G_Edges.begin(),G_Edges.end());
    vector<int>v(nodes);
    for(int i=0;i<nodes;i++)
        v[i]=i;
    weight=0;
    vector<pair<int,int> >MST;
    vector<pair<int,pair<int,int> > >::iterator it=G_Edges.begin();
    for(it;it!=G_Edges.end();++it){
        int u1=FINDSET(v,it->second.first);
        int v1=FINDSET(v,it->second.second);
        if(u1!=v1){
            MST.push_back(make_pair(it->second.first,it->second.second));
            weight+=it->first;
            UNION(v,it->second.first,it->second.second);
        }
    }
    cout<<weight<<endl;
    return 0;
}
