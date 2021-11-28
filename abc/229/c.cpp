// https://atcoder.jp/contests/abc229/tasks/abc229_c
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, w;
    cin >> n >> w;
    priority_queue<pair<ll, ll>> q;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        q.push({a, b});
    }

    ll ans = 0;
    while (!q.empty())
    {
        auto cur = q.top();
        q.pop();
        auto aa = cur.first;
        auto bb = cur.second;
        if (w >= bb)
            ans += aa * bb, w -= bb;
        else
            ans += aa * w, w = 0;

        if (w == 0)
            break;
    }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
