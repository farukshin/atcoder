// https://codeforces.com/contest/1613/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	int n;
	cin >> n;
	if (n <= 9)
		cout << "AGC00" << n;
	else if (n < 42)
		cout << "AGC0" << n;
	else if (n >= 42)
		cout << "AGC0" << n + 1;
}

int main()
{
	// int t;cin>>t;while(t--)
	solve();
	return 0;
}
