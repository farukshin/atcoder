// https://atcoder.jp/contests/abc232/tasks/abc232_d
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m, ans;
    cin >> n >> m;
    vector<string> v(n);
    for (auto &s : v)
        cin >> s;

    vector<vector<int>> dp(n, vector<int>(m, 0));
    dp[0][0] = ans = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (i == 0 && j == 0)
                continue;
            else if (v[i][j] == '.')
            {
                int a = (i == 0 ? 0 : dp[i - 1][j]);
                int b = (j == 0 ? 0 : dp[i][j - 1]);
                dp[i][j] = max(a, b) + (a == 0 && b == 0 ? 0 : 1);
                ans = max(ans, dp[i][j]);
            }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
