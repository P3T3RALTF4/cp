#include <bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
using namespace std;
const int maxn = 2e5 + 2;
vector <pair<ii,int>>  newbridge;
ii ps[maxn];
int n,C,par[maxn],sz[maxn];
int get(int x) {
    if (x == par[x]) return x;
    else return x = get(par[x]);
}
void dsu(int x, int y) {
    if (sz[x] < sz[y]) swap(x,y);
    sz[x] += sz[y];
    par[y] = x;
    y = x;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> C;
    for (int i = 1;i <= n;i++) {
        cin >> ps[i].first;
    }
    for (int i = 1;i <= n;i++) {
        cin >> ps[i].second;
    }
    sort(ps+1,ps+n+1,[](ii a,ii b) {
        return a.first < b.first;
    });
    par[1] = 1;
    sz[1] = ps[1].second;
    for (int i = 2;i <= n;i++) {
        par[i] = i;
        sz[i] = ps[i].second;
        newbridge.push_back({{i-1,i}, abs(ps[i].first - ps[i-1].first)});
    }
    sort(newbridge.begin(),newbridge.end(),[](pair<ii,int> a, pair<ii,int> b) {
        return a.second < b.second;
    });
    for (auto i : newbridge) {
        int x = get(i.first.first), y = get(i.first.second);
        if (x != y) {
            if (sz[x] + sz[y] >= C) {
                cout << i.second;
                return 0;
            }
            else dsu(x,y);
        }
    }
    return 0;
}
