// https://atcoder.jp/contests/abc215/tasks/abc215_b
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for(int i = 1; i < 64; i++)
        if(ll(ll(1) << i) <= n) ans = i;
        else break;
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}
