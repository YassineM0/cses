#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve() {
    int n,ans = 0;cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    for(int &x:v){
        cin>>x;
    }
    for(int i = 0;i < n;i++) {
        if(mp[v[i]] == 0)++ans;
        ++mp[v[i]];
    }
    cout<<ans;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    #endif
 
    solve();
}