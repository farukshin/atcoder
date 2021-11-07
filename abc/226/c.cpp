// https://atcoder.jp/contests/abc226/tasks/abc226_c
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll ans = 0;
int n;
vector<vector<int>> ss;
vector<int> v;
vector<bool> used;

void dfs(int node)
{
    ans += v[node];
    used[node] = true;
    for (auto chield : ss[node])
        if (!used[chield])
            dfs(chield);
}

void solve()
{
    cin >> n;
    ss.resize(n);
    v.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        int k, a;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> a;
            --a;
            ss[i].push_back(a);
        }
    }

    used.resize(n, false);
    dfs(n - 1);
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
