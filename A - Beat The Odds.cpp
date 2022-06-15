//bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n,num; cin >> n;
	int a = 0, b = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num % 2 == 0) ++a;
		else ++b;
	}
	cout << min(a, b) << endl;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		solve();
	}
	return 0;
}