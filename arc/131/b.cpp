// https://atcoder.jp/contests/arc131/tasks/arc131_b
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (auto &s : v)
        cin >> s;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] != '.')
                continue;
            set<char> st;
            if (i != 0)
                st.insert(v[i - 1][j]);
            if (j != 0)
                st.insert(v[i][j - 1]);
            if (i != n - 1)
                st.insert(v[i + 1][j]);
            if (j != m - 1)
                st.insert(v[i][j + 1]);

            v[i][j] = '1';
            while (st.count(v[i][j]))
                v[i][j]++;
        }

    for (auto s : v)
        cout << s << "\n";
}

int main()
{
    solve();
    return 0;
}
