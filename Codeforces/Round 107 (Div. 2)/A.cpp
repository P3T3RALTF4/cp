#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;
int n, k, l, c, d, p, nl, np;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int V = k*l,slices = c*d;
    cout << min({V / nl,slices, p/np})/n;
    return 0;
}
