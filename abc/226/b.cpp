// https://atcoder.jp/contests/abc226/tasks/abc226_b
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

struct Vertex
{
    int n;
    bool fin = false;
    map<int, Vertex *> next;
    Vertex(int _n) { n = _n; }
};

Vertex *root = new Vertex(-1);
int ans = 0;

Vertex *add(Vertex *node, int num, bool fin)
{
    if (!node->next.count(num))
        node->next[num] = new Vertex(num);

    Vertex *res = node->next[num];
    if (fin && !res->fin)
        res->fin = true, ans++;
    return res;
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        Vertex *cur = root;
        for (int j = 0; j < k; j++)
        {
            int a;
            cin >> a;
            bool fl = (j == k - 1 ? true : false);
            cur = add(cur, a, fl);
        }
    }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
