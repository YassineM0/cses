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
 
    string s;cin>>s;
    int mx = 1;
    for(int i = 1;i < s.length();i++) {
        int temp = 1;
        while(s[i] == s[i-1]) {
            ++temp;
            ++i;
        }
        mx = max(mx, temp);
    } 
    cout<<mx;
