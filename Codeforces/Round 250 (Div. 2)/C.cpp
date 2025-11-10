#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e3 + 2;
int n,m, a[maxn],ans = 0;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 1;i <= n;i++) cin >> a[i];
    for (int i = 1;i <= m;i++) {
        int x,y;
        cin >> x >> y;
        ans += min(a[x],a[y]);
    }
    cout << ans;
    return 0;
}
