// https://atcoder.jp/contests/abc222/tasks/abc222_d
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

const ll mod = 998244353;

void solve()
{
    ll n, a[3005], b[3005], dp[3005][3005] = {0};
    cin >> n;
    for(ll i = 1; i <= n; i++) cin >> a[i];
    for(ll i = 1; i <= n; i++) cin >> b[i];

    for(ll i = 0; i <= 3000; i++)
        dp[0][i] = 1;

    for(ll i = 1; i <= n; i++)
    {
        for(ll j = a[i]; j <= b[i]; j++)
            dp[i][j] += dp[i - 1][j], dp[i][j] %= mod;

        for(ll j = 1; j <= 3000; j++)
            dp[i][j] += dp[i][j - 1], dp[i][j] %= mod;
    }
    cout << dp[n][3000];
}

int main()
{
    solve();
    return 0;
}
