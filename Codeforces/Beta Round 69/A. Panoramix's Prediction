#include <bits/stdc++.h>
using namespace std;
const int maxn = 60;
int n,m,p[maxn];
vector <int> primes;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    p[1] = 1;
    for (int i = 2;i*i <= 50;i++) {
        if (!p[i]) {
            for (int j = i*i; j <= 50;j+=i) p[j] = 1;
        }
    }
    for (int i = 2;i <= 50;i++) {
        if (!p[i]) primes.push_back(i);
    }
    cin >> n >> m;
    int fi = lower_bound(primes.begin(),primes.end(),n) - primes.begin();
    if (primes[fi+1] == m) cout << "YES";
    else cout << "NO";
    return 0;
}
