#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve() {
    int n;cin>>n;
    vector<int>v(n),w(n);
    for(int i = 0;i < n;i++) {
        cin>>v[i]>>w[i];
    }
    sort(v.begin(),v.end());
    sort(w.begin(),w.end());
    int mx = 0,temp = 0,x = 0,y = 0;
    while(x < n) {
        if(v[x] < w[y]) {++x;++temp;}
        else {--temp;++y;}
        mx = max(temp,mx);
    }
    cout<<mx<<'\n';
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    #endif
 
    solve();
}