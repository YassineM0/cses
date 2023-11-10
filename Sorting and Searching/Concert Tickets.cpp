#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve() {
    int n,m;cin>>n>>m;
    multiset<int,greater<int>> s;
    while(n--) {
        int x;cin>>x;
        s.insert(x);
    }
    while(m--) {
        int x;cin>>x;
        auto it = s.lower_bound(x);
        if(it == s.end()) {
            cout<<"-1\n";
        }
        else {
            cout<<*it<<'\n';
            s.erase(it);
        }
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    #endif
 
    solve();
}