// https://atcoder.jp/contests/abc217/tasks/abc217_c
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> ans(n);
    for(auto &d : v)
    {
        cin >> d;
        --d;
    }
    for(int i = 0; i < n; i++)
        ans[v[i]] = i;
    for(auto d : ans) cout << d + 1 << " ";
}


int main()
{
    solve();
    return 0;
}
