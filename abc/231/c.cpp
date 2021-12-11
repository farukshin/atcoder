// https://atcoder.jp/contests/abc231/tasks/abc231_c
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (auto &d : v)
        cin >> d;
    sort(begin(v), end(v));

    for (int i = 0; i < q; i++)
    {
        int cur;
        cin >> cur;
        cout << v.end() - lower_bound(begin(v), end(v), cur) << "\n";
    }
}

int main()
{
    solve();
    return 0;
}
