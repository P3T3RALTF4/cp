#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 2;
int n,a[maxn];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;i++) cin >> a[i];
    int mn = INT_MAX,cnt = 0, pos = -1;
    for (int i = 1;i <= n;i++) {
        if (mn > a[i]) mn = a[i], cnt = 1,pos = i;
        else if (mn == a[i]) cnt++, pos = -1;
    }
    if (pos == -1) cout << "Still Rozdil";
    else cout << pos;
    return 0;
}
