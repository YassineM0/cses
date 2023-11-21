#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;cin>>n;
    vector<ll>v(n);
    for(ll &x:v)cin>>x;
    ll sm = v[0],mx = v[0];
    for(ll i = 1;i < n;i++) {
        sm = max(v[i],sm + v[i]);
        mx = max(sm,mx);
    }
    cout<<mx;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    #endif

    solve();
}
