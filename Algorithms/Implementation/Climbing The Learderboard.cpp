#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,M,temp;
  cin>>N;
  stack<int>s;
  for(int i=0;i<N;i++){
    cin>>temp;
    if(s.empty()||s.top()!= temp) 
        s.push(temp);
  }
  cin>> M;
  for(int i=0;i<M;i++) {
    cin>>temp;
    while(!s.empty() && temp>=s.top()) 
        s.pop();
    cout<<s.size()+1<<endl;
  }
  return 0;
}
