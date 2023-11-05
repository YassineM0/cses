#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
const int MOD = 1e9 + 7;
 
ll be(ll a,ll b) {
    ll res = 1;
    while(b) {
        a %= MOD;
        if(b&1) {
            res *= a;
            res %= MOD;
        }
        a *= a;
        a %= MOD;
        b >>= 1;
    }
    return res;
}
 
void solve() {
    //
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    #endif
    ll n;cin>>n;
    cout<<be(2,n);
}