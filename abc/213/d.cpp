// https://atcoder.jp/contests/abc213/tasks/abc213_d
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n;
vector<set<int>> ss;
vector<int> color;

void dfs(int node)
{
    color[node] = 1;
    cout << node + 1 << " ";
    bool success = false;
    for(auto chield : ss[node])
        if(color[chield] == 0 || color[chield] == 2)
            dfs(chield), success = true, cout << node + 1 << " ";
    color[node] = 2;
}

void solve()
{
    cin >> n;
    ss.resize(n);
    color.resize(n, 0);

    for(int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ss[a].insert(b);
        ss[b].insert(a);
    }
    dfs(0);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}
