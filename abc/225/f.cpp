// https://atcoder.jp/contests/abc225/tasks/abc225_f
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;
    string v[50], dp[51];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v, v + n, [](auto a, auto b)
    {
        return a + b > b + a;
    });

    for (int i = 1; i <= k; i++)
        dp[i] = "~";
    for (int i = 0; i < n; i++)
        for (int j = k; j--;)
            if (dp[j] != "~")
                dp[j + 1] = min(dp[j + 1], v[i] + dp[j]);
    cout << dp[k];
}

int main()
{
    solve();
    return 0;
}
