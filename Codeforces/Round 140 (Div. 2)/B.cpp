#include <bits/stdc++.h>
#define fi first
#define se second
#define int long long
using namespace std;
const int maxn = 1e5 + 2;
int n, p[maxn],t, ans1 = 0, ans2 = 0;
void Solve() {
    int x;
    cin >> x;
    ans1 += p[x];
    ans2 += (n-p[x]+1);
}
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;i++) {
        int x;
        cin >> x;
        p[x] = i;
    }
    cin >> t;
    while (t--) Solve();
    cout << ans1 << " " << ans2;
    return 0;
}
