#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
 
void solve() {
    ll n ;cin>>n;
    cout<<0<<'\n';
    for(ll i = 2;i <= n;i++) {
        cout<<i*i*(i*i-1)/2 -4*(i-1)*(i-2)<<'\n';
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    #endif
    int t;cin>>t;
    solve();
}