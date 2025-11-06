#include <bits/stdc++.h>
using namespace std;
const int maxn = 102;
int n,a[maxn];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;i++) cin >> a[i];
    int ans = abs(a[n] - a[1]),b = n,e = 1;
    for (int i = 2;i <= n;i++) {
        if (ans > abs(a[i] - a[i-1])) {
            ans = abs(a[i] - a[i-1]);
            b = i-1, e = i;
        }
    }
    cout << b << " " << e;
    return 0;
}
