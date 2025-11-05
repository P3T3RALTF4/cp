#include <bits/stdc++.h>
using namespace std;
int s1,s2,s3,s4;
unordered_map <int,int> mp;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> s1 >> s2 >> s3 >> s4;
    mp[s1]++, mp[s2]++, mp[s3]++, mp[s4]++;
    cout << 4 - mp.size();
    return 0;
}
