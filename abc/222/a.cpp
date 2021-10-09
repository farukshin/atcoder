// https://atcoder.jp/contests/abc222/tasks/abc222_a
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    string s;
    cin >> s;
    cout << string(4 - s.size(), '0') << s;
}

int main()
{
    solve();
    return 0;
}
