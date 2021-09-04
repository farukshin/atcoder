// https://atcoder.jp/contests/abc217/tasks/abc217_e
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        if(v[i].first == 1) cin >> v[i].second;
    }
    map<int, int> mp;
    queue<int> noSort;
    for(int i = 0; i < n; i++)
    {
        int a = v[i].first, b = v[i].second;
        if(a == 1)
            noSort.push(b);
        else if(a == 2 && mp.size() > 0)
        {
            auto it = mp.begin();
            int num = (*it).first;
            cout << num << "\n";
            mp[num]--;
            if(mp[num] == 0) mp.erase(num);
        }
        else if(a == 2 && noSort.size() > 0)
            cout << noSort.front() << "\n", noSort.pop();
        else if(a == 3)
            while(!noSort.empty()) mp[noSort.front()]++, noSort.pop();
    }
}


int main()
{
    solve();
    return 0;
}
