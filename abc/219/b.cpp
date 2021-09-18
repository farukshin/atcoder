// https://atcoder.jp/contests/abc219/tasks/abc219_b
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s1, s2, s3, t;
    cin >> s1 >> s2 >> s3 >> t;

    for(auto ch : t)
        if(ch == '1') cout << s1;
        else if(ch == '2') cout << s2;
        else if(ch == '3') cout << s3;
}

int main()
{
    solve();
    return 0;
}
