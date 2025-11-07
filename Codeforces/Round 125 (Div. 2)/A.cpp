#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 1e5 + 2;
ll n,dp[maxn];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    dp[0] = 0, dp[1] = 1;
    for (int i = 2;i <= 46;i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    cin >> n;
    for (int i = 0;i <= 46;i++) {
        for (int j = 0;j <= 46;j++) {
            for (int k = 0;k <= 46;k++) {
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
