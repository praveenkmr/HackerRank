#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Matrix{
    public:
        vector<vector<int> >a;
        Matrix operator +(Matrix &A){
            Matrix temp;
            vector<vector<int > >::iterator it=this->a.begin();
            for(int i=0;it!=a.end();i++,it++){
                vector<int>b;
                vector<int >::iterator it1=this->a[i].begin();
                for(int j=0;it1!=this->a[i].end();j++,it1++){
                    b.push_back(this->a[i][j]+A.a[i][j]);
                }
                temp.a.push_back(b);
            }
           return temp;
        }  
};

int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}
