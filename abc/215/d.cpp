// https://atcoder.jp/contests/abc215/tasks/abc215_d
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int N = 1000000;
int lp[N + 1];
vector<int> pr;

int cnt, m;
set<int> st;

void solve()
{
    for (int i = 2; i <= N; ++i)
    {
        if (lp[i] == 0)
        {
            lp[i] = i;
            pr.push_back (i);
        }
        for (int j = 0; j < (int)pr.size() && pr[j] <= lp[i] && i * pr[j] <= N; ++j)
            lp[i * pr[j]] = pr[j];
    }


    cin >> cnt >> m;
    for(int i = 0; i < cnt; i++)
    {
        int cur;
        cin >> cur;
        st.insert(cur);
    }
    vector<bool > ans(100000 + 50, true);

    set<int> del;
    for(auto d : st)
    {
        auto cur = d;
        while(cur > 1)
        {
            del.insert(cur);
            del.insert(lp[cur]);
            cur /= lp[cur];
        }
    }

    for(auto dd : del)
    {
        auto cur = dd;
        while(cur <= m)
        {
            ans[cur] = false;
            cur += dd;
        }
    }

    int cnt = 0;
    for(int i = 1; i < 100000 + 5 && i <= m; i++)
        if(ans[i]) cnt++;

    cout << cnt << "\n";
    for(int i = 1; i < 100000 + 5 && i <= m; i++)
        if(ans[i]) cout << i << "\n";

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
