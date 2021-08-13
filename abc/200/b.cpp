// https://atcoder.jp/contests/abc200/tasks/abc200_b
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n, k;
    cin >> n >> k;
    while(k--)
        n = (n % 200 ? n * 1000 + 200 : n / 200);
    cout << n;
}


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(10);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}