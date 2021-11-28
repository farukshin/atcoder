// https://atcoder.jp/contests/abc229/tasks/abc229_e
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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> ss(n);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ss[a].push_back(b);
        ss[b].push_back(a);
    }

    Dsu dsu(n);
    int cnt = 0;
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        ans[i] = cnt;
        cnt++;
        for (auto chield : ss[i])
            if (chield > i)
                cnt -= (dsu.merge(chield, i) ? 1 : 0);
    }

    for (auto d : ans)
        cout << d << "\n";
}

int main()
{
    solve();
    return 0;
}
