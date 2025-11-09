#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;
ll n,k,dp[2002][2002];
set <ll> f[2002];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j*j <= i;j++) {
            if (i % j == 0) {
                f[i].insert(i/j);
                f[i].insert(j);
            }
        }
    }
    for (int i = 1;i <= n;i++) dp[1][i] = 1;
    for (int i = 1;i <= k;i++) {
        for (int j = 1;j <= n;j++) {
            for (int k : f[j]) {
                dp[i][j] = (dp[i-1][k] + dp[i][j])%mod;
            }
        }
    }
    ll ans=  0;
    for (int i = 1;i <= n;i++) {
        ans = (ans + dp[k][i])%mod;
    }
    cout << ans;
    return 0;
}
