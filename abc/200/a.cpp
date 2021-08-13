// https://atcoder.jp/contests/abc200/tasks/abc200_a
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a;
    cin >> a;
    cout << a / 100 + (a % 100 ? 1 : 0);
}


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(10);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}