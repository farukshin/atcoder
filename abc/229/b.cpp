// https://atcoder.jp/contests/abc229/tasks/abc229_b
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() != s2.size())
    {
        int mx = max(int(s1.size()), int(s2.size()));
        s1 = string(mx - s1.size(), '0') + s1;
        s2 = string(mx - s2.size(), '0') + s2;
    }

    bool simpl = true;
    for (int i = 0; i < int(s1.size()); i++)
    {
        int a = s1[i] - '0';
        int b = s2[i] - '0';
        if (a + b > 9)
            simpl = false;
    }

    cout << (simpl ? "Easy" : "Hard");
}

int main()
{
    solve();
    return 0;
}
