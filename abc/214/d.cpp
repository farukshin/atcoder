// https://atcoder.jp/contests/abc214/tasks/abc214_d
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

vector<int> leader;
vector<int> rang;
vector<int> size_group;

void make_set (int v)
{
    leader[v] = v;
    rang[v] = 0;
    size_group[v] = 1;
}

void init (int n)
{
    leader.resize(n);
    rang.resize(n);
    size_group.resize(n);
    for(int i = 0; i < n; i++)
        make_set(i);
}

int find_set (int v)
{
    if (v == leader[v])
        return v;
    return leader[v] = find_set (leader[v]);
}

int size (int v)
{
    return size_group[find_set(v)];
}

void union_sets (int a, int b)
{
    a = find_set (a);
    b = find_set (b);
    if (a != b)
    {
        if (rang[a] < rang[b])
            swap (a, b);
        size_group[a] += size_group[b];
        leader[b] = a;
        if (rang[a] == rang[b])
            ++rang[a];
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<tuple<ll, int, int>> v(n - 1);
    for(auto &[len, a, b] : v)
    {
        cin >> a >> b >> len;
        --a, --b;
    }
    sort(begin(v), end(v));

    ll ans = 0;
    init(n);
    for(auto &[len, a, b] : v)
    {
        ans += len * size(a) * size(b);
        union_sets(a, b);
    }
    cout << ans;
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
