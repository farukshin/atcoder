// https://atcoder.jp/contests/abc219/tasks/abc219_d    //todo
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<pair<int, int>> v1(n), v2(n), v;
    set<pair<int, int>> st;
    int sa = 0, sb = 0;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v1[i].first = a, v1[i].second = b;
        v2[i].first = b, v2[i].second = a;
        sa += a, sb += b;
    }
    if(x > sa || y > sb)
    {
        cout << -1;
        return;
    }


    sort(begin(v1), end(v1), greater<pair<int, int>>());
    int curx = 0, cury = 0;
    for(int i = 0; i < n; i++)
    {
        curx += v1[i].first, cury += v2[i].second;
        if(!st.count(v1[i]))
            v.push_back(v1[i]), st.insert(v1[i]);
        if(curx >= x && cury >= y)
            break;
    }


    sort(begin(v2), end(v2), greater<pair<int, int>>());
    curx = 0, cury = 0;
    for(int i = 0; i < n; i++)
    {
        cury += v2[i].first, curx += v2[i].second;
        if(!st.count(v2[i]))
            v.push_back(v2[i]), st.insert(v2[i]);
        if(curx >= x && cury >= y)
            break;
    }


    int ans = INT_MAX;
    int sz = v.size() + 1;
    for(int i = 1; i < (1 << sz); i++)
    {
        int curx = 0, cury = 0, curAns = 0;
        for(int j = 0; j < v.size(); j++)
            if(i & (1 << j))
                curx += v[j].first, cury += v[j].second, curAns++;
        if(curx >= x && cury >= y)
            ans = min(ans, curAns);
    }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
