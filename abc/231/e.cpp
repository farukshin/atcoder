// https://atcoder.jp/contests/abc231/tasks/abc231_e //todo
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAXARR = 60;
int n;
ll x; //, ans=LLONG_MAX;
ll v[MAXARR];
map<ll, ll> mp;

ll f(ll sum)
{
    if (mp.count(sum))
        return mp[sum];
    if (sum == 0)
        return 0;

    ll ans = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        ll nom = v[i];
        ll need = sum / nom + (sum % nom ? 1 : 0);
        ll cost = need * nom;
        ll curans = need + f(cost - sum);
        ans = min(ans, curans);
    }
    mp[sum] = ans;
    return ans;
}

void solve()
{
    cin >> n >> x;
    for (auto &d : v)
        cin >> d, mp[d] = 1;
    cout << f(x);
}

int main()
{
    solve();
    return 0;
}
