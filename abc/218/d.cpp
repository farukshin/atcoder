// https://atcoder.jp/contests/abc218/tasks/abc218_d
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(auto &d : v) cin >> d.first >> d.second;

    set<pair<int, int>> st(begin(v), end(v));

    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < i; j++)
            if(v[i].first == v[j].first || v[i].second == v[j].second)
                continue;
            else if(st.count({v[i].first, v[j].second}) && st.count({v[j].first, v[i].second}))
                ans++;
    cout << ans / 2;
}

int main()
{
    solve();
    return 0;
}
