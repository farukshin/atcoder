// https://atcoder.jp/contests/abc230/tasks/abc230_e
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, ans = 0;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        ll j = n / i, newi = (i > j ? n / j : i);
        ;
        ans += (newi - i + 1) * j;
        i = newi;
    }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
