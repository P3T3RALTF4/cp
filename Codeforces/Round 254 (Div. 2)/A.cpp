#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 102;
int n,m, r[] = {0,-1}, c[] = {-1,0};
char a[maxn][maxn];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= m;j++) cin >> a[i][j];
    }
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= m;j++) {
            if (a[i][j] == '-') {
                cout << '-';
                continue;
            }
            if (i % 2 != 0) {
                if (j % 2 != 0) cout << 'B';
                else cout << 'W';
            }
            else {
                if (j % 2 != 0) cout << 'W';
                else cout << 'B';
            }
        }
        cout << "\n";
    }
    return 0;
}
