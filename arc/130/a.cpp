// https://atcoder.jp/contests/arc130/tasks/arc130_a
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    string s;
    cin >> n >> s;
    ll ans = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            ll pos = i + 1;
            while (pos < n - 1 && s[pos + 1] == s[pos])
                pos++;
            ll cnt = pos - i + 1;
            ans += cnt * (cnt - 1) / 2;
            i = pos;
        }
    }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
