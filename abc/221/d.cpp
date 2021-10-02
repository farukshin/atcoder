// https://atcoder.jp/contests/abc221/tasks/abc221_d
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

struct event
{
    int x, type;
    event(int _x, int _type)
    {
        x = _x, type = _type;
    }
};

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    map<int, vector<event>> mp;
    for (int i = 0; i < n; ++i)
    {
        int aa, bb;
        cin >> aa >> bb;
        mp[aa].push_back(event(aa, 1));
        mp[aa + bb - 1].push_back(event(aa + bb - 1, -1));
    }

    vector<ll> ans(n + 1, 0);
    int cnt = 0, pre = -1;
    for(auto d : mp)
    {
        if(pre != -1 && d.first - pre > 1)
            ans[cnt] += d.first - pre - 1;
        pre = d.first;

        sort(begin(d.second), end(d.second), [](const event & e1, const event & e2)
        {
            return e1.x == e2.x ? e1.type > e2.type : e1.x < e2.x;
        });
        auto curCnt = cnt;
        for(auto dd : d.second)
            cnt += dd.type, curCnt = max(curCnt, cnt);
        ans[curCnt]++;

    }

    for(int i = 1; i <= n; i++)
        cout << ans[i] << " ";
}

int main()
{
    solve();
    return 0;
}
