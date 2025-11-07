#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
bool ok = false;
string s;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> s;
    for (int i = 0;i < s.size();i++) {
        if (s[i] != '1' && s[i] != '4') {
            cout << "NO";
            return 0;
        }
        if (s[i] == '1') cnt = 0, ok = 1;
        else {
            cnt++;
            if (cnt > 2 || !ok) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}
