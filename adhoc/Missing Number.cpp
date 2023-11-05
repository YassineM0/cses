#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(ll n) {
    
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    #endif

    ll n;cin>>n;
    ll temp = n*(n+1)/2,s = 0;
    for(ll i = 0;i < n-1;i++) {
        ll x;cin>>x;
        s += x;
    }
    cout<<temp - s;
}