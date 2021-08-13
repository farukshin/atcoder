// https://atcoder.jp/contests/abc213/tasks/abc213_c
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

map<int, int> row, col;
vector<pair<int, pair<int, int>>> v;

void solve()
{
    int h, w, n;
    cin >> h >> w >> n;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({i + 1, {a, b}});
        row[a] = col[b] = 0;
    }
    sort(begin(v), end(v));

    int pre = 0;
    for(auto d : row)
        row[d.first] = ++pre;
    pre = 0;
    for(auto d : col)
        col[d.first] = ++pre;

    for(auto d : v)
        cout << row[d.second.first] << " " << col[d.second.second] << "\n";

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(10);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}