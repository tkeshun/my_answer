#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
using G = vector<vector<int>>;

int main(){
    string s,t,u;
    int a,b;
    cin >> s >> t >> a >> b >> u;
    if(s == u) a--;
    else b--;
    cout << a <<" " <<b << endl;
}

