// https://atcoder.jp/contests/abc221/tasks/abc221_c
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    while(n)
    {
        int cur = n % 10;
        v.push_back(cur);
        n /= 10;
    }
    int cnt = v.size();
    sort(begin(v), end(v), greater<int>());

    ll ans = 0;
    for(int i = 0; i < (1 << cnt); i++)
    {
        ll a = 0, b = 0;
        for(int j = 0; j < cnt; j++)
            if(i & (1 << j))
                a = a * 10 + v[j];
            else
                b = b * 10 + v[j];
        ans = max(ans, a * b);
    }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
