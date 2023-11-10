#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve() {
    // x + y = m => y = m - x
    int n,m;cin>>n>>m;
    vector<int>v(n);
    map<int,int>mp;
    for(int &x:v){
        cin>>x;
    }    
    //sort(v.begin(),v.end());
    for(int i = 0;i < n;i++) {
        if(mp[m - v[i]]) {
            cout<<mp[m - v[i]]<<' '<<i + 1;
            return;
        }
        mp[v[i]] = i + 1;
    }
    cout<<"IMPOSSIBLE";
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    #endif
 
    solve();
}
