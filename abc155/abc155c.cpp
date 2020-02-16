#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(v) (v).begin(),(v).end()
using namespace std;
using ll = long long;
using P = pair<int,int>;
using G = vector<vector<int>>;

int main(){
    int n;
    cin >> n;
    map<string,int> s;
    rep(i,n){
        string input;
         cin >> input;
        s[input]++; 
    }
    int max_n = 0;
    for(auto m : s){
        max_n = max(max_n, m.second);
    }
    for(auto m : s){
        if(m.second == max_n) cout << m.first << endl;
    }
}
