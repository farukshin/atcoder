// https://atcoder.jp/contests/abc214/tasks/abc214_c
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
	int n;
	cin>>n;
	ll s[n], t[n];
	for(auto &d:s) cin>>d;
	for(auto &d:t) cin>>d;

	while(true)
	{
		bool success = false;
		for(int i=0;i<n;i++)
			if(s[(i+n-1)%n]+t[(i+n-1)%n] < t[i]) t[i] = s[(i+n-1)%n]+t[(i+n-1)%n], success = true;
		if(!success) break;
	}

	for(auto d:t) cout<<d<<" ";
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
	//cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}
