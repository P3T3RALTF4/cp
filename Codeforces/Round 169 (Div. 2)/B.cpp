#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
#define ii pair<int,int>
using namespace std;
int cnt[28] = {0}, c = 0;
string s;
void Input()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    Input();
    cin >> s;
    for (int i = 0;i < s.size();i++) {
        cnt[s[i] - 'a' + 1]++;
    }
    for (int i = 1;i <= 26;i++) {
        if (cnt[i] % 2 != 0) c++;
    }
    if (c % 2 != 0 || c == 0) cout << "First";
    else cout << "Second";
}
