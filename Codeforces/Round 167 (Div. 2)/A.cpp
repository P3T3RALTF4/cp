#include <bits/stdc++.h>
using namespace std;
const int maxn = 102;
int n,s = 0, cnt = 0;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;i++) {
        int x; cin >> x;
        s+=x;
    }
    for (int i = 1;i <= 5;i++) {
        int q = s + i;
        if (q % (n+1) == 1) cnt++;
    }
    cout << 5 - cnt;
    return 0;
}
