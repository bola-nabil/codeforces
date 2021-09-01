#include <iostream>
using namespace std;

void solve()
{
	int k, m, l, n, d;
	cin >> k >> m >> l >> n >> d;
    int count = d;

	if (k == 1 || m == 1 || l == 1 || n == 1 )
		cout << d << endl;
	else {
		for (int i = 1; i <= d; i++)
		{
			if (i % k != 0 && i % m != 0 && i % l != 0 && i % n != 0)
				count--;
		}
		cout << count << endl;
	}
}

int main()
{
	solve();
	return 0;
}