#include <bits/stdc++.h>
using namespace std;
int x,y,z;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> x >> y >> z;
    int c1 = __gcd(x,y), c2 = __gcd(x,z);
    cout << c1*4 + c2*4 + (z/c2)*4;
    return 0;
}
