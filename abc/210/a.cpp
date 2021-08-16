// https://atcoder.jp/contests/abc210/tasks/abc210_a
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, a, x, y;
    cin >> n >> a >> x >> y;
    cout << min(n, a) * x + max(n - a, 0)*y;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}