// https://atcoder.jp/contests/abc217/tasks/abc217_d
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int l, q;
    cin >> l >> q;
    set<pair<int, int>> st;
    st.insert({0, l});
    for(int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        auto it = st.upper_bound({b, 0});
        --it;
        auto aa = (*it).first, bb = (*it).second;

        if(a == 1)
        {
            st.insert({aa, b});
            st.insert({b, bb});
            st.erase(it);
        }
        else if(a == 2)
            cout << bb - aa << "\n";
    }
}


int main()
{
    solve();
    return 0;
}
