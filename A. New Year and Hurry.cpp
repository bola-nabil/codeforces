#include <iostream>
using namespace std;

void solve()
{
	int n, k;
	cin >> n >> k;
	int count = 0 ,sum =0;
	int c_m = (240 - k);

	for (int i = 1; i <= n; i++)
	{
		sum+=i * 5;
		if (sum > c_m)
			break;
		count++;
	}
	cout << count << endl;
}

int main()
{
	solve();
	return 0;
}