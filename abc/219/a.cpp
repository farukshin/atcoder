// https://atcoder.jp/contests/abc219/tasks/abc219_a
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    if(n >= 90) cout << "expert";
    else if(n >= 70) cout << 90 - n;
    else if(n >= 40) cout << 70 - n;
    else if(n >= 0) cout << 40 - n;
}

int main()
{
    solve();
    return 0;
}
