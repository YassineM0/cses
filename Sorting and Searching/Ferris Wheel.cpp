#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve() {
    //2 3 7 9
    int n,m,ans = 0;cin>>n>>m;
    vector<int>v(n);
    //vector<bool>b(n,0);
    for(int &x:v)cin>>x;
    sort(v.begin(),v.end());
    int i = 0,j = n-1;
    while(i<=j) {
        if(v[i] + v[j] <= m) {
            ++ans;
            ++i;
            --j;
        }
        else{
            --j;
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