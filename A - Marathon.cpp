//bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int count = 0;

	if (b >= a) count++;
	if (c >= a) count++;
	if (d >= a) count++;
	cout << count << endl;

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