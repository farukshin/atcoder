// https://atcoder.jp/contests/abc231/tasks/abc231_d
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

const int MAXARR = 2e5 + 5;
vector<int> used(MAXARR, false);
vector<vector<int>> ss(MAXARR);
vector<int> cnt(MAXARR, 0);
bool success = true;

void dfs(int node, int par)
{
    used[node] = true;
    for (auto chield : ss[node])
    {
        if (chield == par || !success)
            continue;
        if (used[chield])
            success = false;
        else
            dfs(chield, node);
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        cnt[a]++, cnt[b]++;
        if (cnt[a] > 2 || cnt[b] > 2)
            success = false;

        ss[a].push_back(b);
        ss[b].push_back(a);
    }
    if (!success)
    {
        cout << "No";
        return;
    }

    for (int i = 0; i < n; i++)
        if (!used[i])
            dfs(i, -1);

    cout << (success ? "Yes" : "No");
}

int main()
{
    solve();
    return 0;
}
