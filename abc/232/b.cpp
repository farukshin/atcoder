// https://atcoder.jp/contests/abc232/tasks/abc232_b
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s, t;
    cin >> s >> t;
    bool success = (s.size() == t.size());
    int k = ((t[0] - 'a') + 26 - (s[0] - 'a')) % 26;
    for (int i = 1; i < s.size() && success; i++)
        if (((t[i] - 'a') + 26 - (s[i] - 'a')) % 26 != k)
            success = false;
    cout << (success ? "Yes" : "No");
}

int main()
{
    //int t;cin>>t;while(t--)
    solve();
    return 0;
}
