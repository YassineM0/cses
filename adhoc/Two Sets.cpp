#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
 
void solve() {
    ll n;cin>>n;
    ll temp = n*(n+1)/2;
    if(temp&1) {
        cout<<"NO\n";
        //cout<<temp;
        return;
    }
    cout<<"YES\n";
    vector<ll>v1,v2;
    ll temp2 = temp/2;
    for(ll i = n;i > 0;i--) {
        if(i<=temp2) {
            v1.push_back(i);
            temp2 -= i;
        }
        else v2.push_back(i);
    }
    cout<<v1.size()<<'\n';
    for(auto x:v1) cout<<x<<' ';
    cout<<'\n';
    cout<<v2.size()<<'\n';
    for(auto x:v2) cout<<x<<' ';
    cout<<'\n';
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    #endif
    solve();
}