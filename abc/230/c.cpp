// https://atcoder.jp/contests/abc230/tasks/abc230_c
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, a, b, p, q, r, s;
    cin >> n >> a >> b >> p >> q >> r >> s;
    for (ll i = p; i <= q; i++)
    {
        for (ll j = r; j <= s; j++)
            cout << (a - i == b - j || a - i == -b + j ? "#" : ".");
        cout << "\n";
    }
}

int main()
{
    solve();
    return 0;
}
