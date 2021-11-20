// https://atcoder.jp/contests/abc228/tasks/abc228_c
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> ans(1205, 0);
    vector<int> cnt(1205, 0);
    vector<int> point(n, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int p;
            cin >> p;
            point[i] += p;
        }
        cnt[point[i]]++;
    }
    int c = 0;
    for (int i = 1205 - 1; i >= 0; i--)
    {
        ans[i] = c;
        c += cnt[i];
    }
    for (int i = 0; i < n; i++)
        cout << (k > ans[point[i] + 300] ? "Yes" : "No") << "\n";
}

int main()
{
    //int t;cin>>t;while(t--)
    solve();
    return 0;
}
