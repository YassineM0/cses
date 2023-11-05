#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
bool pal(string s) {
    int l = 0;
    int r = s.length() - 1;
 
    while (l < r) {
        while (l < r && !isalnum(s[l]))
            l++;
        while (l < r && !isalnum(s[r]))
            r--;
 
        if (tolower(s[l]) != tolower(s[r]))
            return false;
 
        l++;
        r--;
 
    }
 
    return true;
}
 
void solve() {
    ll x,y;cin>>x>>y;
    if(x > y) {
        if(x & 1) {
            cout<<(x-1)*(x-1) + y<<'\n';
            return;
        }
        else {
            cout<<x*x - y +1<<'\n';
        }
    }
    else {
        if(y & 1) {
            cout<<y*y - x + 1<<'\n';
            return;
        }
        else {
            cout<<(y-1)*(y-1) +x<<'\n';
            return;
        }
    }
 
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    #endif
    int t;cin>>t;
    while(t--)solve();
}