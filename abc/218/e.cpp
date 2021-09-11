// https://atcoder.jp/contests/abc218/tasks/abc218_e
#include <bits/stdc++.h>
using namespace std;

struct Dsu
{
    int n;
    vector<int> leader, rang, sz;

    Dsu(int _n) : leader(_n), rang(_n), sz(_n, 1)
    {
        iota(begin(leader), end(leader), 0);
    }

    int get(int v)
    {
        return v == leader[v] ? v : leader[v] = get(leader[v]);
    }

    int size(int v)
    {
        return sz[get(v)];
    }

    bool merge(int u, int v)
    {
        u = get(u), v = get(v);
        if (u == v)
        {
            return false;
        }
        if (rang[u] < rang[v])
        {
            swap(u, v);
        }
        leader[v] = u;
        sz[u] += sz[v];
        if (rang[u] == rang[v])
        {
            ++rang[u];
        }
        return true;
    }
};


void solve()
{
    int n, m;
    cin >> n >> m;
    vector<tuple<int, int, int>> v(m);
    for (auto& [c, a, b] : v)
    {
        cin >> a >> b >> c;
        --a, --b;
    }
    sort(begin(v), end(v));

    Dsu dsu(n);
    long long ans = 0;
    for (auto& [c, a, b] : v)
    {
        if (dsu.get(a) == dsu.get(b) && c > 0) ans += c;
        dsu.merge(a, b);
    }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
