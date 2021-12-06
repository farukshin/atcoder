// https://atcoder.jp/contests/abc177/tasks/abc177_b
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s, t;
    cin >> s >> t;
    int n = s.size() - t.size() + 1;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int cur = 0;
        for (int j = 0; j < t.size(); j++)
            if (t[j] != s[i + j])
                cur++;
        ans = min(ans, cur);
    }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
