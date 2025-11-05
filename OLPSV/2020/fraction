#include <bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
#define llll pair<long long,long long>
#define fi first
#define se second
using namespace std;
const int maxn = 1e6 + 2;
vector <int> primes;
unordered_map <int,int> mp1,mp2;
int n,t;
bool p[maxn];
void Prime() {
    p[1] = 1;
    for (int i = 2;i*i <= maxn;i++) {
        if (!p[i]) {
            for (int j = i*i;j <= maxn;j+=i) p[j] = 1;
        }
    }
    for (int i = 2;i <= maxn;i++) {
        if (!p[i]) primes.push_back(i);
    }
}
void phantich(int x) {
    for (int i : primes) {
        if (i > x) return;
        if (!p[x]) {
            mp1[x]++;
            return;
        }
        while(x % i == 0) {
            x /= i;
            mp1[i]++;
        }
    }
}
void phantich2(int x) {
    for (int i : primes) {
        if (i > x) return;
        if (!p[x]) {
            mp2[x]++;
            return;
        }
        while(x % i == 0) {
            x /= i;
            mp2[i]++;
        }
    }
}
void Solve() {
    mp1.clear(), mp2.clear();
    cin >> n;
    for (int i = 1;i <= n;i++) {
        int x;
        cin >> x;
        if (!p[x]) mp1[x]++;
        else phantich(x);
    }
    for (int i = 1;i <= n;i++) {
        int x;
        cin >> x;
        if (!p[x]) mp2[x]++;
        else phantich2(x);
    }
    for (ii i : mp2) {
        if (i.fi == 2 || i.fi == 5) continue;
        if (i.se > mp1[i.fi]) {
            cout << "repeating" << "\n";
            return;
        }
    }
    cout << "finite" << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    Prime();
    cin >> t;
    while (t--) Solve();
    return 0;
}
/*
4
2 1 7 5 6
1 3 20
1 4 1
1 116 495
*/
