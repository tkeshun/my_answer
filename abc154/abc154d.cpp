#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
using G = vector<vector<int>>;

int main(){
  int n,k;
  //さいころ
  cin >> n >> k;
  double p = 0;
  //各さいころの期待値
  vector<double> E(n,0);
  rep(i,n){
      cin >> p;
      E[i] = (p*(p + 1) / 2) / p;
  }
  //累積和
  vector<double> s(n+1,0);
  for(int i=0;i < n;++i) s[i+1] = s[i] + E[i];
  double ans = 0;
  for(int left=0;left<n+1;left++){
      double total = 0;
      int right = left + k;
      if(right> n+1) {
          break;
      }
      total = s[right] - s[left];
      ans = max(total, ans);
  }
  printf("%.12lf\n", ans);
}

