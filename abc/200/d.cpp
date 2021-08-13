// https://atcoder.jp/contests/abc200/tasks/abc200_d
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(auto &d : v) cin >> d;
    ll bt = min(10ll, n);

    vector<ll> used(205, -1);

    for(ll i = 1; i < (1 << bt); i++)
    {
        ll cur = 0;
        for(ll j = 0; j < bt; j++)
            if(i & (1ll << j)) cur += v[j];
        cur %= 200;
        if(used[cur] == -1)
            used[cur] = i;
        else
        {
            cout << "Yes\n" << __builtin_popcount(used[cur]) << " ";
            for(ll j = 0; j < bt; j++)
                if(used[cur] & (1ll << j)) cout << j + 1 << " ";
            cout << "\n" << __builtin_popcount(i) << " ";
            for(ll j = 0; j < bt; j++)
                if(i & (1ll << j)) cout << j + 1 << " ";
            return;
        }
    }
    cout << "No";
}


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(10);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}