// https://atcoder.jp/contests/abc221/tasks/abc221_b
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s, t;
    cin >> s >> t;
    if(s == t)
    {
        cout << "Yes";
        return;
    }
    else if(s.size() != t.size())
    {
        cout << "No";
        return;
    }

    for(int i = 0; i < s.size() - 1; i++)
        if(s[i] != t[i])
        {
            swap(s[i], s[i + 1]);
            cout << (s == t ? "Yes" : "No");
            return;
        }
    cout << "No";
}

int main()
{
    solve();
    return 0;
}
