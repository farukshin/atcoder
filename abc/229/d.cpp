// https://atcoder.jp/contests/abc229/tasks/abc229_d
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int k;
    string s;
    cin >> s >> k;
    int n = s.size();
    int ans = 0, cnt = 0, r = 0;
    for (int l = 0; l < n; l++)
    {
        while (r < n && (s[r] == 'X' || cnt + 1 <= k))
            cnt += (s[r] == '.' ? 1 : 0), r++;
        ans = max(ans, r - l);
        cnt -= (s[l] == '.' ? 1 : 0);
    }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
