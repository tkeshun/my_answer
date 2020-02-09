#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
using G = vector<vector<int>>;

int main(){
  int n;
  cin >> n;
  map<int,int> a;
  rep(i,n){
      int tmp;
      cin >> tmp;
      a[tmp]++; 
  }
  bool diff = true;
  for(auto m : a){
      if(m.second > 1) diff = false;
  }
  if(diff) cout << "YES" << endl;
  else cout << "NO" << endl;

}

