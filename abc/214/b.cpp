// https://atcoder.jp/contests/abc214/tasks/abc214_b
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int s, t;
    cin >> s >> t;
    ll ans = 0;
    for(int a = 0; a <= s; a++)
        for(int b = 0; b <= s; b++)
            for(int c = 0; c <= s; c++)
                if((a + b + c) <= s && (a * b * c) <= t)
                    ans++;
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}
