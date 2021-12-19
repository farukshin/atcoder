// https://atcoder.jp/contests/abc232/tasks/abc232_c
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> sr1, sr2;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        --a, --b;
        sr1.push_back({a, b});
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        --a, --b;
        sr2.push_back({a, b});
    }
    sort(begin(sr1), end(sr1));
    sort(begin(sr2), end(sr2));

    if (m == 0 || sr1 == sr2)
    {
        cout << "Yes";
        return;
    }

    vector<int> ans(n);
    for (int i = 0; i < n; i++)
        ans[i] = i;

    do
    {
        vector<pair<int, int>> sr3;
        for (int i = 0; i < m; i++)
        {
            pair<int, int> p = {ans[sr2[i].first], ans[sr2[i].second]};
            if (p.first > p.second)
                swap(p.first, p.second);
            sr3.push_back(p);
        }
        sort(begin(sr3), end(sr3));
        if (sr1 == sr3)
        {
            cout << "Yes";
            return;
        }
    } while (next_permutation(begin(ans), end(ans)));
    cout << "No";
}

int main()
{
    solve();
    return 0;
}
