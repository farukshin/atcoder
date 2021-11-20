// https://atcoder.jp/contests/abc228/tasks/abc228_d
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n = 1 << 20;
    vector<ll> v(n, -1);
    set<int> st;
    for (int i = 0; i < n; i++)
        st.insert(i);
    int q;
    cin >> q;
    while (q--)
    {
        int t;
        ll a;
        cin >> t >> a;
        if (t == 1)
        {
            auto it = st.lower_bound((int)(a % n));
            if (it == st.end())
                it = st.begin();
            v[*it] = a;
            st.erase(it);
        }
        else
        {
            cout << v[a % n] << "\n";
        }
    }
}

int main()
{
    solve();
    return 0;
}
