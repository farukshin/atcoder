// https://atcoder.jp/contests/abc210/tasks/abc210_d
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int h, w;
    ll c;
    cin >> h >> w >> c;
    vector<vector<int>> a(h, vector<int>(w));
    for(int i = 0; i < h; i++)
        for(int j = 0; j < w; j++)
            cin >> a[i][j];

    const ll INF = 1e18;
    ll ans = INF;

    for(int p = 0; p < 2; p++)
    {
        vector<vector<ll>> d(h, vector<ll>(w, INF));
        for(int i = 0; i < h; i++)
            for(int j = 0; j < w; j++)
            {
                if (i) d[i][j] = min(d[i][j], d[i - 1][j]);
                if (j) d[i][j] = min(d[i][j], d[i][j - 1]);
                ans = min(ans, a[i][j] + (i + j) * c + d[i][j]);
                d[i][j] = min(d[i][j], a[i][j] - (i + j) * c);
            }

        reverse(a.begin(), a.end());
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}