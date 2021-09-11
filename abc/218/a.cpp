// https://atcoder.jp/contests/abc218/tasks/abc218_a
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    cout << (s[n - 1] == 'o' ? "Yes" : "No");
}

int main()
{
    solve();
    return 0;
}
