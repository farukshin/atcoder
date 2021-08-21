// https://atcoder.jp/contests/abc215/tasks/abc215_c
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    int k;
    cin >> s >> k;
    set<string> st;
    sort(begin(s), end(s));
    st.insert(s);
    while(next_permutation(s.begin(), s.end()))
        st.insert(s);

    int i = 0;
    for(auto d : st)
    {
        i++;
        if(i == k)
        {
            cout << d;
            break;
        }
    }

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
