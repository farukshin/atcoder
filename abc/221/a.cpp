// https://atcoder.jp/contests/abc221/tasks/abc221_a
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll ans = pow(ll(32), a - b);
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
