#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;
int n,m, ans;
queue <pair <int,int> > q;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 1;i <= n;i++) {
        int x;
        cin >> x;
        q.push({i,x});
    }
    while (!q.empty()) {
        int cur = q.front().fi, rem = q.front().se;
        q.pop();
        if (rem <= m) ans = cur;
        else {
            q.push({cur,rem - m});
        }
    }
    cout << ans;
    return 0;
}
