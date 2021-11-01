// https://atcoder.jp/contests/abc225/tasks/abc225_a
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for(int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        v[a]++, v[b]++;
    }
    int cen = -1;
    bool success = true;
    for(int i = 0; i < n && success; i++)
    {
        if(v[i] > 1 && cen != -1 || v[i] == 0) success = false;
        else if(v[i] > 1 && cen == -1) cen = i;
    }
    cout << (success ? "Yes" : "No");
}


int main()
{
    solve();
    return 0;
}
