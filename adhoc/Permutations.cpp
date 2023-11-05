#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve() {
    //1 5
    int n;cin>>n;
    if(n == 1) {
        cout<<"1\n";
        return;
    }
    if(n<=3){
        cout<<"NO SOLUTION";
        return;
    }
    for(int i = 2;i <= n;i+=2)
        if(i <= n)cout<<i<<' ';
    for(int i = 1;i <= n;i+=2)
        if(i <= n)cout<<i<<' ';
    return;
}
 
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    #endif
    
    solve();
