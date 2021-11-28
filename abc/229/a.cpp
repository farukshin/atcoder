// https://atcoder.jp/contests/abc229/tasks/abc229_a
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    bool success = true;
    if (s1[0] == s2[1] && s1[1] == s2[0] && s1[0] != s1[1])
        success = false;
    cout << (success ? "Yes" : "No");
}

int main()
{
    //int t;cin>>t;while(t--)
    solve();
    return 0;
}
