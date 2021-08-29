// https://atcoder.jp/contests/abc216/tasks/abc216_a
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int x, y;
    scanf("%d.%d", &x, &y);
    string s = (y >= 0 && y <= 2 ? "-" : y >= 7 && y <= 9 ? "+" : "");
    cout << x << s;
}

int main()
{
    solve();
    return 0;
}
