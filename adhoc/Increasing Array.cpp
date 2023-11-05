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
 
    int n;cin>>n;
    ll ans = 0;
    vector<int>v(n);
    for(int &x:v)cin>>x;
    int prec = v[0];
    for(int i = 1;i < n;i++) {
        if(prec>v[i])ans += prec - v[i];
        else prec = v[i];
    }
    cout<<ans;
}   
