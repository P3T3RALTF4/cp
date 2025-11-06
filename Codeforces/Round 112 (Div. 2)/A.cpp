#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;
pair <int,int> ps[202];
int n, cnt = 0;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> ps[i].fi >> ps[i].se;
    }
    for (int i = 1;i <= n;i++) {
        bool p1=0,p2=0,p3=0,p4=0,ok;
        for (int j = 1;j <= n;j++) {
            if (i == j) continue;
            if (ps[i].fi == ps[j].fi) {
                if (ps[i].se > ps[j].se) p1 = 1;
                else if (ps[i].se < ps[j].se) p2 = 1;
            }
            else if (ps[i].se == ps[j].se) {
                if (ps[i].fi > ps[j].fi) p3 = 1;
                else if (ps[i].fi < ps[j].fi) p4 = 1;
            }
        }
        ok = p1&p2&p3&p4;
        if (ok) cnt++;
    }
    cout << cnt;
    return 0;
}
