#include <bits/stdc++.h>
using namespace std;
int x,y,z, a[5];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> a[1] >> a[2] >> a[3];
    sort(a+1,a+4);
    int x = a[1], y = a[2], z = a[3];
    for (int i = 1;i <= y;i++) {
        if (y % i == 0 && z % i ==0 ) {
            int c1 = y / i, c2 = z / i;
            if (c1*c2 == x) {
                cout << c1*4 + c2*4 + i*4;
                return 0;
            }
        }
    }
    return 0;
}
