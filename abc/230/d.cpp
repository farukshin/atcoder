// https://atcoder.jp/contests/abc230/tasks/abc230_d
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, d;
    cin >> n >> d;
    vector<pair<ll, ll>> v(n);
    for (auto &d : v)
        cin >> d.second >> d.first;
    sort(begin(v), end(v));
    ll ans = 0, last = -(1ll << 40);
    for (auto vv : v)
        if (last + d - 1 < vv.second)
            ans++, last = vv.first;
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
