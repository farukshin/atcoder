// https://atcoder.jp/contests/abc218/tasks/abc218_c
#include <bits/stdc++.h>
using namespace std;

void povorot90(vector<string> &v)
{
    int sz = v.size();
    auto res = v;

    for(int i = 0; i < sz; i++)
        for(int j = 0; j < sz; j++)
            res[i][j] = v[j][sz - i - 1];
    v = res;
}

void prin(vector<string> v)
{
    for(auto &s : v) cout << s << "\n";
    cout << "\n\n";
}

vector<string> zip(vector<string> v)
{
    vector<string> res;
    int n = v.size();
    int a1 = n - 1, a2 = 0, b1 = n - 1, b2 = 0;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(v[i][j] == '#')
                a1 = min(a1, i), b1 = min(b1, j), a2 = max(a2, i), b2 = max(b2, j);

    for(int i = a1; i <= a2; i++)
    {
        string s = "";
        for(int j = b1; j <= b2; j++)
            s += v[i][j];
        res.push_back(s);
    }

    return res;
}

void solve()
{
    int n;
    cin >> n;
    vector<string> v(n), vv(n);
    for(auto &s : v) cin >> s;
    for(auto &s : vv) cin >> s;

    vector<string> minv = zip(v);

    bool success = false;
    if(minv == zip(vv)) success = true;

    povorot90(vv);
    if(minv == zip(vv)) success = true;

    povorot90(vv);
    if(minv == zip(vv)) success = true;

    povorot90(vv);
    if(minv == zip(vv)) success = true;

    cout << (success ? "Yes" : "No");
}

int main()
{
    solve();
    return 0;
}
