// https://atcoder.jp/contests/abc216/tasks/abc216_b
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    map<pair<string, string>, int> mp;
    bool ans = false;
    for(int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if(mp.count({s1, s2})) ans = true;
        mp[ {s1, s2}]++;
    }
    cout << (ans ? "Yes" : "No");
}

int main()
{
    solve();
    return 0;
}
