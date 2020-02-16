#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(v) (v).begin(),(v).end()
using namespace std;
using ll = long long;
using P = pair<int,int>;
using G = vector<vector<int>>;

int in[10];
int main(){
  int a,b,c;
  
  cin >> a >> b >> c;
  in[a]++;
  in[b]++;
  in[c]++;
  for(int i=1;i<10;i++){
       if(in[i] == 2) 
       {cout << "Yes" << endl;
       return 0;
       }
  }
  cout << "No"<< endl;
}
