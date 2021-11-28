// https://atcoder.jp/contests/arc130/tasks/arc130_c //#todo
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string a, b, bb = "", aa = "";
    cin >> a >> b;
    bool swp = false;
    if (a < b)
        swp = true, swap(a, b);
    int n = b.size();
    //sort(begin(a),end(a));
    map<int, int> mp;
    for (auto ch : a)
        mp[ch - '0']++;
    //int start = int(a.size())-int(b.size());
    int peren = 0;
    for (int i = 0; i < n; i++)
    {
        int cur = int(b[i] - '0') + peren;
        int need = 10 - cur;
        auto it = mp.lower_bound(need);
        if (it == mp.end())
            it = mp.begin();
        int find = (*it).first;
        if (mp[find] == 1)
            mp.erase(it);
        else
            mp[find]--;
        aa = aa + char('0' + find);
        peren = (cur + find >= 10 ? 1 : 0);
    }

    for (auto d : mp)
        for (int i = 0; i < d.second; i++)
            aa = char('0' + d.first) + aa;

    if (!swp)
        cout << aa << "\n"
             << b;
    else
        cout << b << "\n"
             << aa;
}

int main()
{
    solve();
    return 0;
}
