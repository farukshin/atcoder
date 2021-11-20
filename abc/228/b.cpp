// https://atcoder.jp/contests/abc228/tasks/abc228_a
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n+1);
    vector<bool> used(n+1, false);
    for(int i=1;i<=n;i++) cin>>v[i];
    int ans=0;
    while(true)
    {
    	if(used[k]) break;
    	used[k] = true;
    	ans++, k = v[k];
    }
    cout<<ans;
}

int main()
{
	//int t;cin>>t;while(t--)
	solve();
	return 0;
}
