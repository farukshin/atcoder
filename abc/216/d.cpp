// https://atcoder.jp/contests/abc216/tasks/abc216_d
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;
    const int MAXARR = 200005;
    vector<vector<int>> v(MAXARR);
    vector<int> cnt(MAXARR, 0);
    vector<vector<pair<int, int>>> position(MAXARR);
    queue<int> q;

    for(int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        v[i].resize(k);
        for(int j = 0; j < k; j++)
        {
            int cur;
            cin >> cur;
            --cur;
            v[i][j] = cur;
            position[cur].push_back({i, j});
        }
        cnt[v[i][k - 1]]++;
        if(cnt[v[i][k - 1]] == 2)
            q.push(v[i][k - 1]);
    }

    for(int i = 0; i < n; i++)
        assert(position[i].size() == 2);

    int cntCalc = 0;
    while(!q.empty())
    {
        auto color = q.front();
        q.pop();
        cntCalc++;
        cnt[color] = 0;

        auto pos1 = position[color][0], pos2 = position[color][1];

        if(pos1.second != 0 )
        {
            cnt[v[pos1.first][pos1.second - 1]]++;
            if(cnt[v[pos1.first][pos1.second - 1]] == 2)
                q.push(v[pos1.first][pos1.second - 1]);
        }

        if(pos2.second != 0 )
        {
            cnt[v[pos2.first][pos2.second - 1]]++;
            if(cnt[v[pos2.first][pos2.second - 1]] == 2)
                q.push(v[pos2.first][pos2.second - 1]);
        }
    }
    cout << (cntCalc == n ? "Yes" : "No");
}

int main()
{
    solve();
    return 0;
}
