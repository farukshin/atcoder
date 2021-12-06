// https://atcoder.jp/contests/abc177/tasks/abc177_c
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, mod = 1e9 + 7;
    cin >> n;
    ll ans = 0;
    vector<ll> v(n, 0), sum(n + 1, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] = v[i] % mod;
    }

    for (ll i = n - 1; i >= 0; i--)
        sum[i] = (i != n - 1 ? sum[i + 1] : 0) + v[i], sum[i] %= mod;

    for (ll i = 0; i < n - 1; i++)
        ans += (v[i] * sum[i + 1]) % mod, ans = ans % mod;
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
