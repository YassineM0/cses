#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n)
{
    cout << n << ' ';
    if (n == 1)
        return;
    if (n & 1)
        return solve(3 * n + 1);
    else
        return solve(n / 2);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    solve(n);
