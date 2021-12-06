// https://atcoder.jp/contests/abc177/tasks/abc177_d
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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
    int n, m, ans = 1;
    cin >> n >> m;
    Dsu dsu(n);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        if (dsu.merge(a, b))
            ans = max(ans, dsu.size(a));
    }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
