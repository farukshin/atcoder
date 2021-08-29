// https://atcoder.jp/contests/abc216/tasks/abc216_c
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n;
    cin >> n;
    stack<char> st;
    while(n)
    {
        if(n & 1) st.push('A'), n--;
        else st.push('B'), n /= 2;
    }
    while(!st.empty())
    {
        cout << st.top();
        st.pop();
    }
}

int main()
{
    solve();
    return 0;
}
