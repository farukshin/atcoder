// https://atcoder.jp/contests/abc225/tasks/abc225_d
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, q, t;
    cin >> n >> q;
    vector<int> next(n, -1), pre(n, -1);
    for (int i = 0; i < q; i++)
    {
        cin >> t;
        if (t == 1)
        {
            int a, b;
            cin >> a >> b;
            --a, --b;
            next[b] = a;
            pre[a] = b;
        }
        else if (t == 2)
        {
            int a, b;
            cin >> a >> b;
            --a, --b;
            next[b] = -1;
            pre[a] = -1;
        }
        else if (t == 3)
        {
            int a;
            cin >> a;
            --a;
            while (next[a] != -1)
                a = next[a];
            vector<int> ans;
            while (a != -1)
                ans.push_back(a), a = pre[a];
            cout << ans.size() << " ";
            for (auto d : ans)
                cout << d + 1 << " ";
            cout << "\n";
        }
    }
}

int main()
{
    solve();
    return 0;
}
