#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(v) (v).begin(),(v).end()
using namespace std;
using ll = long long;
using P = pair<int,int>;
using G = vector<vector<int>>;

int main(){
    int n;
    bool flag = true; 
    cin >> n;
    vector<int> a(n,0);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++){
        if(a[i] % 2 == 0) if(a[i] % 5 != 0 && a[i] % 3 != 0) flag = false;

    }
    if(flag)cout << "APPROVED" << endl;
    else cout << "DENIED" << endl;
}
