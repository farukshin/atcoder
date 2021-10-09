// https://atcoder.jp/contests/abc222/tasks/abc222_c
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int addPoint(char ch1, char ch2)
{
    int ans = 0;
    if(ch1 == ch2) ans = 0;
    else if(ch1 == 'G' && ch2 == 'C') ans = 1;
    else if(ch1 == 'G' && ch2 == 'P') ans = 0;
    else if(ch1 == 'C' && ch2 == 'G') ans = 0;
    else if(ch1 == 'C' && ch2 == 'P') ans = 1;
    else if(ch1 == 'P' && ch2 == 'G') ans = 1;
    else if(ch1 == 'P' && ch2 == 'C') ans = 0;
    return ans;
}

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    if(p1.first == p2.first) return p1.second < p2.second;
    else return p1.first > p2.first;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> v(2 * n);
    for(auto &s : v) cin >> s;

    vector<pair<int, int>> res(2 * n);
    for(int i = 0; i < n; i++)
    {
        res[2 * i] = {0, 2 * i};
        res[2 * i + 1] = {0, 2 * i + 1};
    }
    sort(begin(res), end(res), cmp);

    for(int tur = 0; tur < m; tur++)
    {
        vector<pair<int, int>> newRes(2 * n);
        for(int i = 0; i < 2 * n; i = i + 2)
        {
            auto a = res[i];
            auto b = res[i + 1];
            char hod1 = v[a.second][tur];
            char hod2 = v[b.second][tur];
            a.first += addPoint(hod1, hod2);
            b.first += addPoint(hod2, hod1);
            newRes[i] = a;
            newRes[i + 1] = b;
        }
        sort(begin(newRes), end(newRes), cmp);
        res = newRes;
    }

    for(int i = 0; i < 2 * n; i++)
        cout << res[i].second + 1 << "\n";
}

int main()
{
    solve();
    return 0;
}
