// https://atcoder.jp/contests/abc230/tasks/abc230_b
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s, t = "oxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxxoxx";
    cin >> s;
    int n = s.size();
    if (t.substr(0, n) == s || t.substr(1, n) == s || t.substr(2, n) == s)
        cout << "Yes";
    else
        cout << "No";
}

int main()
{
    // int t;cin>>t;while(t--)
    solve();
    return 0;
}
