#include <bits/stdc++.h>
using namespace std;
int n, s[8], a[8], ans;
void Solve() {
    if (n >= s[7]) n %= s[7];
    if (n == 0) {
        for (int i = 1;i <= 7;i++) {
            if (a[i] != 0) ans = i;
        }
        cout << ans;
        return;
    }
    for (int i = 1;i <= 7;i++) {
        if (n <= s[i]) {
            cout << i;
            return;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1;i <= 7;i++) {
        int x;
        cin >> x;
        a[i] = x;
        s[i] = s[i-1] + x;
    }
    Solve();
    return 0;
}
