// https://atcoder.jp/contests/arc131/tasks/arc131_c
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, x = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &d : v)
        cin >> d, x ^= d;

    if (n & 1)
    {
        cout << "Win";
        return;
    }
    for (auto d : v)
        if ((x ^ d) == 0)
        {
            cout << "Win";
            return;
        }

    cout << "Lose";
}

int main()
{
    solve();
    return 0;
}
