#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;
string a,b,c;
unordered_map <char,int> mp,mp2;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> a >> b >> c;
    for (int i = 0;i < a.size();i++) mp[a[i]]++;
    for (int i = 0;i < b.size();i++) mp[b[i]]++;
    for (int i = 0;i < c.size();i++) mp2[c[i]]++;
    if (mp.size() != mp2.size()) {
        cout << "NO";
        return 0;
    }
    for (pair <char,int> i : mp) {
        if (mp2[i.fi] != i.se) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
