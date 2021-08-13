// https://atcoder.jp/contests/abc200/tasks/abc200_c
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, cur;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] %= 200;
    }
    map<int, int> mp;
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans += mp[v[i]];
        mp[v[i]]++;
    }
    cout << ans;
}


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(10);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}