// https://atcoder.jp/contests/abc217/tasks/abc217_b
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve()
{
    map<string, int> mp =
    {
        {"ABC", 1},
        {"ARC", 1},
        {"AGC", 1},
        {"AHC", 1}
    };
    for(int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;
        mp[s]--;
    }
    for(auto d : mp)
        if(d.second == 1 )
        {
            cout << d.first;
            break;
        }
}


int main()
{
    solve();
    return 0;
}
