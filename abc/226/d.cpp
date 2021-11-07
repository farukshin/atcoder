// https://atcoder.jp/contests/abc226/tasks/abc226_d
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (auto &d : v)
        cin >> d.first >> d.second;
    sort(begin(v), end(v));

    set<pair<ll, ll>> st;
    pair<ll, ll> cur;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            cur.first = v[i].first - v[j].first;
            cur.second = v[i].second - v[j].second;
            ll g = gcd(abs(cur.first), abs(cur.second));
            cur.first /= g;
            cur.second /= g;
            st.insert(cur);
        }
    cout << ll(st.size()) * 2;
}

int main()
{
    solve();
    return 0;
}
