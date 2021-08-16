// https://atcoder.jp/contests/abc210/tasks/abc210_b
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int i = 0;
    for(; i < n; i++)
        if(s[i] == '1')
            break;
    cout << (i % 2 ? "Aoki" : "Takahashi");
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}