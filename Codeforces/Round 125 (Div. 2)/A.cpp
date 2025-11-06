#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 1e5 + 2;
ll n,dp[maxn];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    dp[0] = 1, dp[1] = 1;
    for (int i = 2;i <= 45;i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    cin >> n;
    for (int i = 1;i <= 45;i++) {
        for (int j = 1;j <= 45;j++) {
            for (int k = 1;k <= 45;k++) {
                if (dp[i] + dp[j] + dp[k] == n) {
                    cout << dp[i] << " " << dp[j] << " " << dp[k];
                    return 0;
                }
            }
        }
    }
    cout << "I'm too stupid to solve this problem";
    return 0;
}
