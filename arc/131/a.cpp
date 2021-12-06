// https://atcoder.jp/contests/arc131/tasks/arc131_a
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (b % 2 == 0)
        cout << b / 2 << '0' << a;
    else
        cout << b * 5 << '0' << a;
}

int main()
{
    solve();
    return 0;
}
