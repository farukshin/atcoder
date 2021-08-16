// https://atcoder.jp/contests/abc210/tasks/abc210_c
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    int v[n];

    for(int i = 0; i < k; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    int ans = mp.size();
    for(int i = k; i < n; i++)
    {
        cin >> v[i];
        mp[v[i - k]]--;
        if(mp[v[i - k]] == 0)
            mp.erase(v[i - k]);
        mp[v[i]]++;
        int curAns = mp.size();
        ans = max(ans, curAns);
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}