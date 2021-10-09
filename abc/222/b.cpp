// https://atcoder.jp/contests/abc222/tasks/abc222_b
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n, s;
    cin >> n >> s;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        ans += (cur < s ? 1 : 0);
    }
    cout << ans;

}

int main()
{
    solve();
    return 0;
}
