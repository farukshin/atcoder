// https://atcoder.jp/contests/abc225/tasks/abc225_c
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m;
    cin >> n >> m;
    int v[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j], v[i][j]--;

    int ciri = v[0][0] / 7;
    int cirj = v[0][0] % 7;

    bool success = (cirj + m) <= 7;
    for (int i = 0; i < n && success; i++)
        for (int j = 0; j < m && success; j++)
            if ((ciri + i) * 7 + (j + cirj) != v[i][j])
                success = false;

    cout << (success ? "Yes" : "No");
}

int main()
{
    solve();
    return 0;
}
