#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve() {
    //45 60 60 80  30 60 75
    int n,m,k,ans = 0;cin>>n>>m>>k;
    vector<int>v(n),w(m);
    for(int &x:v)cin>>x;
    for(int &x:w)cin>>x;
    sort(v.begin(),v.end());
    sort(w.begin(),w.end());
    int i = 0,j = 0;
    while(i<n && j<m) {
        if(abs(v[i] - w[j]) <=k) {
            ++ans;
            ++i;
            ++j;
            continue;
        }
        if(v[i] > w[j]) {
            ++j;
            continue;
        }
        else ++i;
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