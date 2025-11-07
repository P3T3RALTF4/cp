#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
using namespace std;
int n, mx = 0;
map <string,int> mp;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;i++) {
        string s;
        cin >> s;
        mp[s]++;
    }
    string ans = "";
    for (auto i : mp) {
        if (mx < i.se) ans = i.fi, mx = i.se;
    }
    cout << ans;
    return 0;
}
