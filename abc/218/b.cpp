// https://atcoder.jp/contests/abc218/tasks/abc218_b
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    for(int i = 0; i < 26; i++)
    {
        int n;
        cin >> n;
        cout << char('a' + n - 1);
    }

}

int main()
{
    solve();
    return 0;
}
