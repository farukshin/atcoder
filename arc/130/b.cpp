// https://atcoder.jp/contests/arc130/tasks/arc130_b
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m, c, q;
    cin >> n >> m >> c >> q;
    vector<pair<int, pair<int, int>>> v(q);
    for (auto &d : v)
        cin >> d.first >> d.second.first >> d.second.second;

    vector<ll> ans(c, 0);
    set<int> gor, ver;
    for (int i = q - 1; i >= 0; i--)
    {
        auto t = v[i].first;
        auto num = v[i].second.first;
        auto c = v[i].second.second;
        --num, --c;
        if (t == 1)
        {
            if (ver.count(num))
                continue;
            ans[c] += m - gor.size();
            ver.insert(num);
        }
        else if (t == 2)
        {
            if (gor.count(num))
                continue;
            ans[c] += n - ver.size();
            gor.insert(num);
        }
    }
    for (auto d : ans)
        cout << d << " ";
}

int main()
{
    solve();
    return 0;
}
