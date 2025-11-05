#include <bits/stdc++.h>
using namespace std;
int k,l,m,n,d;
void Solve() {
    unordered_set <int> s;
    cin >> k >> l >> m >> n >> d;
    for (int i = 1;i*k <= d;i++) s.insert(i*k);
    for (int i = 1;i*l <= d;i++) s.insert(i*l);
    for (int i = 1;i*m <= d;i++) s.insert(i*m);
    for (int i = 1;i*n <= d;i++) s.insert(i*n);
    cout << s.size();
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}
