// https://atcoder.jp/contests/abc228/tasks/abc228_e
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using mint = modint998244353;

typedef long long ll;
void solve()
{
    ll n, k, m;
    cin >> n >> k >> m;
    if (m % 998244353 == 0)
    {
        cout << 0;
        return;
    }
    mint ans = mint(m).pow(pow_mod(k, n, 998244353 - 1));
    cout << ans.val() << endl;
}

int main()
{
    //int t;cin>>t;while(t--)
    solve();
    return 0;
}
