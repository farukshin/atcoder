// https://atcoder.jp/contests/abc213/tasks/abc213_b
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{

	int n;
	cin>>n;
	vector<pair<int,int>> v(n);
	for(int i=0;i<n;i++) cin>>v[i].first, v[i].second=i+1;
	sort(begin(v),end(v), greater<pair<int,int>>());
	cout<<v[1].second;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
	//cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}
