#include <bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
#define fi first
#define se second
using namespace std;
int n, mn1 = 1e9,mn2 = 1e9, cnt1[2], cnt2[2];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;i++) {
        int x,y;
        cin >> x>> y;
        cnt1[x]++, cnt2[y]++;
    }
    for (int i = 0;i <= 1;i++) {
        mn1 = min(mn1,cnt1[i]);
        mn2 = min(mn2,cnt2[i]);
    }
    cout << mn1 + mn2;
    return 0;
}
