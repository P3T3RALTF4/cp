#include <bits/stdc++.h>
using namespace std;
int a[5][5];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    for (int i = 1;i <= 3;i++) {
        for (int j = 1;j <= 3;j++) cin >> a[i][j];
    }
    for (int i = 1;i <= 3;i++) {
        for (int j = 1;j <= 3;j++) {
            int s = a[i][j] + a[i-1][j] + a[i+1][j] + a[i][j-1] + a[i][j+1];
            if (s % 2 == 0) cout << 1;
            else cout << 0;
        }
        cout << "\n";
    }
    return 0;
}
