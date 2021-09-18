// https://atcoder.jp/contests/abc219/tasks/abc219_g    //todo
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<int>> ss(n);
    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ss[a].push_back(b);
        ss[b].push_back(a);
    }

    vector<int> mp(n);
    for(int i = 0; i < n; i++)
        mp[i] = i;

    for(int i = 0; i < q; i++)
    {
        int a;
        cin >> a;
        --a;
        int to = mp[a];
        for(auto chield : ss[a])
            mp[chield] = to;
    }
    for(int i = 0; i < n; i++)
        cout << mp[i] + 1 << " ";
}

int main()
{
    solve();
    return 0;
}
