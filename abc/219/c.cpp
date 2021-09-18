// https://atcoder.jp/contests/abc219/tasks/abc219_c
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve()
{
    string t;
    int n;
    cin >> t >> n;
    map<char, char> mp;
    for(int i = 0; i < 26; i++)
        mp[t[i]] = char('a' + i);

    vector<pair<string, string>> v(n);
    for(auto &s : v)
    {
        cin >> s.second;
        s.first = s.second;
        for(int i = 0; i < s.first.size(); i++)
            s.first[i] = mp[s.first[i]];
    }
    sort(begin(v), end(v));
    for(auto d : v)
        cout << d.second << "\n";
}

int main()
{
    solve();
    return 0;
}
