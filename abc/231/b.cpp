// https://atcoder.jp/contests/abc231/tasks/abc231_a
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    map<string, int> mp;
    string ans;
    int cntans = 0;
    for (int i = 0; i < n; i++)
    {
        string cur;
        cin >> cur;
        mp[cur]++;
        if (mp[cur] > cntans)
            cntans = mp[cur], ans = cur;
    }
    cout << ans;
}

int main()
{
    //int t;cin>>t;while(t--)
    solve();
    return 0;
}
