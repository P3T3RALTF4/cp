#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define int long long
using namespace std;
ll n,k;
const ll maxn = 1e6 + 20;
vector < pair<pii,int> > di;
vector <ll> primes;
bool p[maxn];
ll mul(ll a, ll b){
  if(a == 0 || b == 0)return 0;
  if( a > n/b )return n+1;
  return a*b;
}
ll binpow(ll n, int k){
  if (k == 0) return 1;
  ll a=binpow(n, k/2);
  if (k%2==0) return mul(a, a);
  else return mul(mul(a, a), n);
}
void Prime() {
    p[1] = 1;
    for (int i = 2;i*i <= maxn;i++) {
        if (p[i] == 0) {
            for (int j = i*i; j<= maxn;j+=i) {
                p[j] = 1;
            }
        }
    }
    for (int i = 2;i <= maxn;i++) {
        if (p[i] == 0) primes.push_back(i);
     }
}
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    Prime();
    cin >> n >> k;
    for (int i = 2;i <= 57;i++) {
        for (int j = 2;j <= 57;j++) {
            for (int z = 2;z <= 57;z++) {
                if (i*j*z == k) {
                    di.push_back({{i,j},z});
                }
            }
        }
    }
    ll ans = 0;
    for (int i = 0;i < primes.size() - 2;i++) {
        for (auto j : di) {
            ll fi = binpow(primes[i],j.first.first - 1);
            ll se = binpow(primes[i+1],j.first.second - 1);
            ll th = binpow(primes[i+2],j.second  - 1);
            ll m = mul(fi,mul(se,th));
            if (m < n) ans = max(ans,m);
        }
    }
    cout << ans;
    return 0;
}
