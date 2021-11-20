// https://atcoder.jp/contests/abc228/tasks/abc228_a
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool success = (a <= b && c >= a && c < b || a > b && c >= a || a > b && c < b);
    cout << (success ? "Yes" : "No");
}

int main()
{
    //int t;cin>>t;while(t--)
    solve();
    return 0;
}
