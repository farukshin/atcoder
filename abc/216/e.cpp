// https://atcoder.jp/contests/abc216/tasks/abc216_e
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAXARR = 100005;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    map<ll, ll> mp;
    ll ans = 0;
    for(auto &d : v)
    {
        cin >> d;
        mp[d]++;
    }

    while(k)
    {
        auto it = mp.end();
        ll last = (*(--it)).first;
        ll pre = (mp.size() == 1 ? ll(0) : (*(--it)).first);

        if((last - pre)*mp[last] <= k)
        {
            k -= (last - pre) * mp[last];
            ans += (pre + 1 + last) * (last - pre) * mp[last] / 2;
            mp[pre] += mp[last];
            mp.erase(last);
        }
        else
        {
            int step = k / mp[last];
            k -= step * mp[last];
            ans += (last - step + 1 + last) * step * mp[last] / 2;
            ans += k * (last - step);
            k = 0;
        }
        if(mp.size() == 1 && mp.count(0) == 1)
            break;
    }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
