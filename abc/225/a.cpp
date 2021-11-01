// https://atcoder.jp/contests/abc225/tasks/abc225_a
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    map<char, int> mp;
    for(int i = 0; i < 3; i++)
    {
        char ch;
        cin >> ch;
        mp[ch]++;
    }
    if(int(mp.size()) == 1) cout << 1;
    else if(int(mp.size()) == 2) cout << 3;
    else if(int(mp.size()) == 3) cout << 6;
}

int main()
{
    solve();
    return 0;
}
