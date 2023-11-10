#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve() {
    int n,temp = 0,ans = 0;cin>>n;
    vector<pair<int,int>>v;
    while(n--) {
        int x,y;cin>>x>>y;
        v.push_back(make_pair(y,x));
    }
    sort(v.begin(),v.end());
    for(auto p:v) {
        if(p.second >= temp) {
            temp = p.first;
            ++ans;
        }
    }
    cout<<ans<<'\n';
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    #endif
 
    solve();
}